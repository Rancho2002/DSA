class Solution:
    def rotate(self, matrix: list[list[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        n=len(matrix)
        a=[[0]*n for _ in range(n)]

        for i in range(n):
            for j in range(n):
                a[i][j]=matrix[n-1-j][i]


a=Solution()
print(a.rotate([[1,2,3],[4,5,6],[7,8,9]]))