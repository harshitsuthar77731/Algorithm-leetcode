class Solution {
public:
    ListNode* fun(ListNode* list1, ListNode* list2){
        if(list1==NULL)
            return list2;
        if(list2==NULL)
            return list1;
        ListNode* temp;
        if(list1->val<=list2->val){
            temp=new ListNode(list1->val);
            list1 = list1->next;
        }
        else{
            temp=new ListNode(list2->val);
            list2 = list2->next;
        }
        temp->next = fun(list1,list2);
        return temp;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        return fun(list1,list2);
    }
};
