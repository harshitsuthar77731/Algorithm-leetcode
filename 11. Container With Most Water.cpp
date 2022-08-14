class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int maxm = INT_MIN;
        while(i<j){
            maxm = max(maxm,(j-i)*min(height[i],height[j]));
            if(height[i]<height[j]){
                i++;
            }else
                j--;
        }
        return maxm;
    }
};
