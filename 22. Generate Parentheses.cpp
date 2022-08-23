class Solution {
public:
    void fun(vector<string>&vs,string temp,int l,int r){
        // base case
        if(l<0||r<0)
            return ;
        if(l==0&&r==0){
            vs.push_back(temp);
            return;
        }
        //recursive case
        
        if(l<r){
            temp+=')';
            fun(vs,temp,l,r-1);
            temp.pop_back();
        }
        temp+='(';
        fun(vs,temp,l-1,r);
        temp.pop_back();
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string>vs;
        string temp ="";
        fun(vs,temp,n,n);
        return vs;
    }
};
