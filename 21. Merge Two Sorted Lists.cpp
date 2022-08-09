class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1)
            return list2;
        if(!list2)
            return list1;
        // we are trying to make list1 smaller if list2 is smaller than list1 than we will switch them
        
        ListNode* head = list1;
        if(list2->val<list1->val){
            head = list2;
            list2 = list1;
            list1 = head;
        }
        while(list1&&list2){
            if(list1->next&&list1->next->val<=list2->val)
                list1 = list1->next;
            else if(list1->val<=list2->val){
                ListNode* temp1 = list1->next;
                ListNode* temp2 = list2->next;
                list1->next = list2;
                list2->next = temp1;
                list1 = list1->next;
                list2 = temp2;
                
            }else
                list1  = list1->next;
        }
        if(list2)
            list1->next = list2;
        return head;
    }
};
