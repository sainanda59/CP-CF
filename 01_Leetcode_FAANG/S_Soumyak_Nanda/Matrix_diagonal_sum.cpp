class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0, n = mat.size();
        for(int i=0; i<n; ++i)
        {
            sum += mat[i][i];
            sum += mat[i][n-i-1];
        }
        if(n%2==1)
            sum -= mat[n>>1][n>>1];
            
        return sum;
    }
};
