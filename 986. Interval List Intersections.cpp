class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& f, vector<vector<int>>& s) {
        int ind1 = 0;
        int ind2 = 0;
        vector<vector<int>>v;
        int i = 1;
        while(ind1<f.size()&&ind2<s.size()){
            if(s[ind2][1]<f[ind1][0]){
                ind2++;
            }else if(f[ind1][1]<s[ind2][0]){
                ind1++;
            }
            else if(f[ind1][0]>s[ind2][0]){
                if(f[ind1][1]<=s[ind2][1]){
                    v.push_back({f[ind1][0],f[ind1][1]});
                    ind1++;
                }
                else{
                    v.push_back({f[ind1][0],s[ind2][1]});
                    ind2++;
                }
            }else if(f[ind1][0]<=s[ind2][0]){
                if(f[ind1][1]<s[ind2][1]){
                    v.push_back({s[ind2][0],f[ind1][1]});
                    ind1++;
                }
                else{
                    v.push_back({s[ind2][0],s[ind2][1]});
                    ind2++;
                }
            }
        }
        return v;
    }
};
