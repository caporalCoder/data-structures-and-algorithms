

grid = []
for grid_i in range(20):
    grid_t = [int(grid_temp) for grid_temp in input().strip().split(' ')]
    grid.append(grid_t)

maxValue = 0

for i in range(20):
    for j in range(20):
        if i <= 16 and j <= 16:
            maxValue = max(maxValue, grid[i][j] * grid[i + 1][j + 1] * grid[i + 2][j + 2] * grid[i + 3][j + 3])
        if i <= 16 :
            maxValue = max(maxValue, grid[i][j] * grid[i + 1][j] * grid[i + 2][j] * grid[i + 3][j])
        if j <= 16 :
            maxValue = max(maxValue, grid[i][j] * grid[i][j + 1] * grid[i][j + 2] * grid[i][j + 3])
        if j >= 3 and i <= 16:
            maxValue = max(maxValue, grid[i][j] * grid[i + 1][j - 1] * grid[i + 2][j - 2] * grid[i + 3][j - 3])

print(maxValue)