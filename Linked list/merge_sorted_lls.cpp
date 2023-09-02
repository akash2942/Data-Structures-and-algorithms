SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    if(head1 == NULL && head2 == NULL)
        return NULL;
    if(head1 != NULL && head2 == NULL)
        return head1;
    if(head1 == NULL && head2 != NULL)
        return head2;

    SinglyLinkedListNode *first , *second , *third , *last;
    first = head1; second = head2;

    if(first -> data < second -> data)
    {
        third = last = first;
        first = first -> next;
        last -> next = NULL;
    }
    else 
    {
        third = last = second;
        second = second -> next;
        last -> next = NULL;
    }

    while(first != NULL && second != NULL)
    {
        if(first -> data < second -> data)
        {
            last -> next = first;
            last = first;
            first = first -> next;
            last -> next = NULL;
        }
        else 
        {
            last -> next = second;
            last = second;
            second = second -> next;
            last -> next = NULL;
        }
    }
    if(first != NULL)
    {
        while(first != NULL)
        {
            last -> next = first;
            last = first;
            first = first -> next;
            last -> next = NULL;
        }
    }

    else if(second != NULL)
    {
        while(second != NULL)
        {
            last -> next = second;
            last = second;
            second = second -> next;
            last -> next = NULL;
        }
    } 
    return third;
}