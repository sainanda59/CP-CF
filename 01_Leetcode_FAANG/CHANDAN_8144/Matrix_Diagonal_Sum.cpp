class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0,n=mat.size();
        for(int i=0,j=0;i<n;i++,j++)
            sum+=mat[i][j];
        for(int i=0,j=n-1;i<n;i++,j--)
            sum+=mat[i][j];
        if(n%2!=0)
            sum=sum-mat[n/2][n/2];
        return sum;
    }
};
