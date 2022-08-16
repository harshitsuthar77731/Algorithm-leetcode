class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int i=0;
        int j=0;
        vector<int>v;
        unordered_map<char,int>mp;
        for(auto x:p)
            mp[x]++;
        int count = mp.size();
        while(j<s.size()){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0)
                    count--;                
            }
            if(j-i+1==p.size()){
                if(count==0)
                    v.push_back(i);
                if(i<=j){
                    if(mp.find(s[i])!=mp.end()){
                        if(mp[s[i]]==0)
                            count++;
                        mp[s[i]]++;
                    }
                    i++;
                }                
            }
            j++;
        }
        return v;
    }
};
