class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<int,int>mp;
        int count = 0;
        for(int i=0;i<s1.size();i++)
            mp[s1[i]]++;
        count= mp.size();
        bool flag=true;
        int i=0;
        int j=0;
        while(j<s2.size()){
            if(mp.find(s2[j])!=mp.end()){
                mp[s2[j]]--;
                if(mp[s2[j]]==0)
                    count--;
            }
           if(j-i+1==s1.size()){
               if(count==0)
                   return true;
               if(mp.find(s2[i])!=mp.end()){
                    mp[s2[i]]++;
                if(mp[s2[i]]==1)
                    count++;
                }
               i++;
           }
            j++;
        }
        return false;
    }
};
