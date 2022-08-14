class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1;
        stack<char>st2;
        for(auto x:s)
            st1.push(x);
        for(auto x:t)
            st2.push(x);
        string temp1="",temp2="";
        int count1 = 0,count2=0;
        while(st1.size()>0){
            if(st1.size()>0&&st1.top()!='#'){
                temp1+=st1.top();
                st1.pop();
            }else{
                while(st1.size()>0&&st1.top()=='#'){
                    count1++;
                    st1.pop();
                }
                while(st1.size()>0&&count1>0&&st1.top()!='#'){
                    st1.pop();
                    count1--;
                }
            }
        }
        while(st2.size()>0){
            if(st2.size()>0&&st2.top()!='#'){
                temp2+=st2.top();
                st2.pop();
            }else{
                while(st2.size()>0&&st2.top()=='#'){
                    count2++;
                    st2.pop();
                }
                while(st2.size()>0&&count2>0&&st2.top()!='#'){
                    st2.pop();
                    count2--;
                }
            }
        }
        // cout<<temp1<<" "<<temp2<<endl;
        if(temp1==temp2)
            return true;
        return false;
    }
};
