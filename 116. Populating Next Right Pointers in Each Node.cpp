/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL)
            return root;
        Node* temp = root;
        queue<Node*>q;
        q.push(temp);
        while(q.size()>0){
            int t = q.size();
            Node* pre = q.front();
            while(t--){
                pre->next = q.front();
                pre = q.front();
                if(pre->left)
                    q.push(pre->left);
                if(pre->right)
                    q.push(pre->right);
                q.pop();
            }   
            pre->next = NULL;
        }
        return root;
    }
};
