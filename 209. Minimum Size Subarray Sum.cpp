class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int len  = INT_MAX;
        int sum = 0;
        int i =0;
        int j =0;
        while(j<nums.size()){
            sum+=nums[j];
            if(sum>=target)
                len = min(len,j-i+1);
            while(i<=j&&sum>target){
                sum-=nums[i];
                i++;
                cout<<sum<<endl;  
                if(sum>=target)
                    len = min(len,j-i+1);
            }
            j++;
        }
        if(len==INT_MAX)
            return 0;
        return len;
    }
};
