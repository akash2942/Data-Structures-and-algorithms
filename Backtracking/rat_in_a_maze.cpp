#include<iostream>
using namespace std;

bool ratInAMaze(int maze[][20], int n, int x, int y, int path[][20])
{
	if(x < 0 || x >= n || y < 0 || y >=n)
	{
		return false;
	}
/*	if(x == n - 1 && y == n - 1) // it returns true even when path[x][y] = 0
	{
		return true;
	}*/
	
	if(maze[x][y] == 0 || path[x][y] == 1)
	{
		return false;
	}
	
	if(x == n - 1 && y == n - 1)
	{
		return true;
	}
	
	path[x][y] = 1;
	// right
	if(ratInAMaze(maze,n,x,y + 1,path))
	{
	//	path[x][y] = 0;
		return true;
	}
	// left
	if(ratInAMaze(maze,n,x, y - 1,path))
	{
	//	path[x][y] = 0;
		return true;
	}
	// top
	if(ratInAMaze(maze,n,x - 1,y,path))
	{
	//	path[x][y] = 0;
		return true;
	}
	// down
	if(ratInAMaze(maze,n,x + 1,y,path))
	{
		//path[x][y] = 0;
		return true;
	}
		path[x][y] = 0;
		
	return false;
}

bool findPath(int maze[][20], int n)
{
	int path[20][20] = {0};
	return ratInAMaze(maze,n,0,0,path);
}


int main()
{
	int n = 3;
	int maze[20][20] = {{1,1,0},{1,1,1},{0,0,1}};
	
	cout << findPath(maze,n);
}