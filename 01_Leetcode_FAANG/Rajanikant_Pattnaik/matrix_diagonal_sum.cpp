class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
              if(i==j||n-1-i==j||n-1-j==i){
                  sum=sum+mat[i][j];
              }  
            }
        }
        return sum;
    }
};
