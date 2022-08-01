class Solution {
public:
    string reverseWords(string s) {
        int init = 0;
        string ans = "";
        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                temp+=s[i];
            }
            else{
                reverse(temp.begin(),temp.end());
                ans+=temp;
                ans+=" ";
                temp = "";
            }
        }
        reverse(temp.begin(),temp.end());
        ans+=temp;
        return ans;
    }
};
