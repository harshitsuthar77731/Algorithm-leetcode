class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix[0].size();
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][n-1]>=target){
                int s = 0;
                int e = n-1;
                while(s<=e){
                    int mid = s + (e-s)/2;
                    if(matrix[i][mid]==target)
                        return true;
                    if(matrix[i][mid]<target) 
                        s = mid+1;
                    else
                        e = mid-1;
                }
                break;
            }
        }
        return false;
    }
};
