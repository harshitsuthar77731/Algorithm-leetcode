class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        for(int t=0;t<nums.size()-2;t++){
            int i = t+1,j = nums.size()-1;
            int ans = nums[t];
            while(i<j){
                int net = ans+nums[i]+nums[j];
                if(net==0){
                    v.push_back({nums[t],nums[i],nums[j]});
                    while(i<j&&nums[i]==nums[i+1]){
                        i++;
                    }
                    while(j>i&&nums[j]==nums[j-1]){
                        j--;
                    }
                    i++;
                    j--;
                }else if(net>0)
                    j--;
                else
                    i++;
            }
            while(t<nums.size()-2&&nums[t]==nums[t+1]){
                t++;
            }
        }
        return v;
    }
};
