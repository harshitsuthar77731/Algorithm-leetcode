class Solution {
public:
    ListNode* fun(ListNode* pre,ListNode* head){
        if(head==NULL)
            return pre;
        ListNode*t = head->next;
        head->next = pre;
        return fun(head,t);
    }
    ListNode* reverseList(ListNode* head) {
        return fun(NULL,head);
    }
};
