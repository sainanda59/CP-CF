class Solution:
    def diagonalSum(self, mat: List[List[int]]) -> int:
        sum = 0
        for i in range(len(mat)):
            sum = sum + mat[i][i]
            mat[i][i] = 0
            sum = sum + mat[i][len(mat)-1-i]
        return sum
