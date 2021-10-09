class Solution(object):
    def rotate(self, matrix):
        new = [[0] * len(matrix) for _ in range(len(matrix))]
        counter = len(matrix)-1
        while counter >= 0:
            for i in range(len(matrix)):
                new[i][len(matrix)-counter-1] = matrix[counter][i]
            counter -= 1
        matrix[:] = new