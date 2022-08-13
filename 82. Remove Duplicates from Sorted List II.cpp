class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        ListNode* pre =NULL;
        int check = -101;
        while(temp&&temp->next){
            
            if(head->val==head->next->val){
                ListNode* node = head->next;
                while(node&&node->val==head->val){
                    node = node->next;
                }
                head = node;
                temp =head;
            }else if(temp->val==temp->next->val){
                ListNode* node = temp->next;
                while(node&&node->val==temp->val){
                    node = node->next;
                }
                pre->next = node;
                temp=node;
            }
            else{
                pre =temp;
                temp = temp->next;
            }
        }
        return head;
    }
};
