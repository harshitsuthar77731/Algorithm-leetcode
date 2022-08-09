class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *temp1 =head;
        while(head&&temp1){
            if(head->val==val){
                head=head->next;
                temp1 = head;
            }
            else if(temp1->next&&temp1->next->val==val){
                ListNode* temp = temp1->next;
                temp1->next= temp->next;
            }
            else
               temp1 = temp1->next;
        }
        return head;
    }
};
