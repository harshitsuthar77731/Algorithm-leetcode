class Solution {
public:
    bool compare(TreeNode* p,TreeNode* q)
    {
        if(p==NULL&&q==NULL)
            return true;
        if(p==NULL||q==NULL)
            return false;
        if(p->val!=q->val)
            return false;
        bool l = true,r=true;
        l = compare(p->left,q->left);
        r = compare(p->right,q->right);
        return l&&r;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL)
            return false;
         bool l = false,r=false;
        l = isSubtree(root->left,subRoot);
        r = isSubtree(root->right,subRoot);
        bool temp = l||r;
        if(root->val==subRoot->val)
            return temp||compare(root,subRoot);
        return l||r;
    }
};
