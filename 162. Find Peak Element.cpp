class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int ans = -1;
        // corner case
        if(nums.size()==1)
            return 0;
        if(nums[0]>nums[1])
            return 0;
        if(nums[nums.size()-2]<nums[nums.size()-1])
            return nums.size()-1;
        int i = 0;
        int j = nums.size()-1;
        while(i<=j){
            int mid = j+(i-j)/2;
            if(nums[mid]>nums[mid+1]&&nums[mid]>nums[mid-1])
                return mid;
            if(nums[mid]<nums[mid-1])
                j = mid-1;
            else
                i = mid+1;
        }
        return -1;
    }
};
