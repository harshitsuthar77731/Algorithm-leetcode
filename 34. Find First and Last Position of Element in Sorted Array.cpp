class Solution {
public:
    int ul(vector<int>& nums, int target){
        int s = 0;
        int e = nums.size()-1;
        int ind = -1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid]==target){
                s = mid+1;
                ind = mid;
            }else if(nums[mid]<target){
                s = mid+1;
            }else
                e = mid-1;
        }
        return ind;
    }
    int ll(vector<int>& nums, int target){
        int s = 0;
        int e = nums.size()-1;
        int ind = -1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid]==target){
                e = mid-1;
                ind = mid;
            }else if(nums[mid]<target){
                s = mid+1;
            }else
                e = mid-1;
        }
        return ind;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int t = ll(nums,target);
        int t2 = ul(nums,target);
        return {t,t2};
    }
};
