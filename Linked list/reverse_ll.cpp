lass Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* a = nullptr;
        ListNode* x = head;
        ListNode* temp;

        while(x){
            temp = x -> next;
            x -> next = a;
            a = x;
            x = temp;
        }
        return temp;
    }
};