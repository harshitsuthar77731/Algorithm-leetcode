class Solution {
public:
    int findMin(vector<int>& nums) {
        int i = 0;
        int j = nums.size()-1;
        int ans = INT_MAX;
        while(i<=j){
            int mid = i+(j-i)/2;
            ans= min(nums[mid],ans);
            if(nums[i]>nums[j]){
                if(nums[mid]>nums[j])
                    i = mid+1;
                else
                    j = mid-1;
            }
            else{
                j = mid-1;
            }
        }
        return ans;
    }
};
