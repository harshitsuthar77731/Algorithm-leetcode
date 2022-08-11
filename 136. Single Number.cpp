class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int t = 0;
        for(auto x: nums)
            t = x^t;
        return t;
    }
};
