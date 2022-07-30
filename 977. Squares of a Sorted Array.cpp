class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>v;
        int i = 0;
        int j = nums.size()-1;
        while(i<=j){
            int t = nums[i]*nums[i];
            int p = nums[j]*nums[j];
            if(t<p){
                v.push_back(p);
                j--;
            }else{
                v.push_back(t);
                i++;
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
