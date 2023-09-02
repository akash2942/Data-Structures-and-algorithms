class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    char comp[9] = {'!','#','$','%','&','*','@','^','~'};
	    int k = 0;
	    
	    for(int i = 0; i < 9; i++)
	    {
	        for(int j = 0; j < n; j++)
	        {
	            if(nuts[j] == comp[i])
	            {
	                swap(nuts[j],nuts[k]);
	                k++;
	            }
	        }
	    }
	    
	    int z = 0;
	    
	     for(int i = 0; i < 9; i++)
	    {
	        for(int j = 0; j < n; j++)
	        {
	            if(bolts[j] == comp[i])
	            {
	                swap(bolts[j],bolts[z]);
	                z++;
	            }
	        }
	    }
	    
	}

};