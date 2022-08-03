class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int j=0;
        int len = 0;
        unordered_map<char,int>mp;
        while(j<s.size()){
            mp[s[j]]++;
            if(mp[s[j]]>1){
                if(mp.size()>len)
                    len = mp.size();
                while(mp[s[j]]>1){
                    mp[s[i]]--;
                    if(mp[s[i]]==0)
                        mp.erase(s[i]);
                    i++;
                }
            }
            j++;
        }
        if(mp.size()>len)
            len = mp.size();
        return len;
    }
};
