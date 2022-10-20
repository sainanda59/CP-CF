class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int total=0;
        int n=mat.size();
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat.size();j++)
            {
                if((i+j)==n-1)
                {
                    cout<<i<<" "<<j<<endl;
                    total+=mat[i][j];
                    
                }
                else if(i==j)
                {
                    total+=mat[i][j];
                }
                
            }
        }
        
        return total;
    }
};
