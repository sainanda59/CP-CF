class Solution {
    public int diagonalSum(int[][] mat) {
        int sum =0;
        for(int i=0;i<mat.length;i++){
            for(int j=0;j< mat[i].length;j++)
            {
                if(i==j)
                {
                    sum = sum + mat[i][j];
                }
                if((i+j)==mat.length-1 && i!=j)
                {
                    sum = sum + mat[i][j];
                }
            }
        }
        return sum;
    }
}
