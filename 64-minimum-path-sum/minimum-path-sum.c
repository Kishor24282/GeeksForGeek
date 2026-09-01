int min (int a, int b) {
    if (a > b)
        return b;
    return a;
}

int minPathSum(int** grid, int gridSize, int* gridColSize) {
    int m = gridSize;
    int n = gridColSize[0];
    int ** res = (int **) malloc(m*sizeof(int*));
    for (int i = 0; i < m; i++) {
        res[i] = malloc(n * sizeof(int));
    }
    for (int i = m-1; i >= 0; i--) {
        for (int j = n-1; j >= 0; j--) {
            if (i == m-1 && j == n-1)
                res[i][j] = grid[i][j];
            else {
                if (i == m-1) {
                    res[i][j] = grid[i][j] + res[i][j+1];
                }
                else {
                    if (j == n-1) {
                        res[i][j] = grid[i][j] + res[i+1][j];
                    }
                    else {
                        res[i][j] = grid[i][j] + min(res[i+1][j], res[i][j+1]);
                    }
                }
            }
        }
    }
    return res[0][0];
}