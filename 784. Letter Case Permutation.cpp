class Solution {
public:
    vector<string>vs;
    void fun(string &s,int ind){
        if(ind==s.size()){
            vs.push_back(s);
            return;
        }
        if(isalpha(s[ind])){
            //one time upper
            s[ind] = toupper(s[ind]);
            fun(s,ind+1);
            // one time lower
            s[ind] = tolower(s[ind]);
            fun(s,ind+1);
        }else{
            fun(s,ind+1);
        }
    }
    vector<string> letterCasePermutation(string s) {
        fun(s,0);
        return vs;
    }
};
