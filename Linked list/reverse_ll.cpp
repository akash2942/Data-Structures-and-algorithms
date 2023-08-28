lass Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* a = nullptr;
        ListNode* b = head;
        ListNode* temp;

        while(b){
            temp = b -> next;
            b -> next = a;
            a = b;
            b = temp;
        }
        return temp;
    }
};