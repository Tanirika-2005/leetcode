class Solution {
public:
int islandPerimeter(vector<vector<int>>& grid) {
    int perimeter = 0;
    int rows = grid.size();
    int cols = grid[0].size();

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 1) {
                // count surrounding land cells
                int surrounding = 0;

                if (i > 0 && grid[i-1][j] == 1) surrounding++;
                if (i < (rows-1) && grid[i+1][j] == 1) surrounding++;
                if (j > 0 && grid[i][j-1] == 1) surrounding++;
                if (j < cols-1 && grid[i][j+1] == 1) surrounding++;

                perimeter += (4 - surrounding);
            }
        }
    }

    return perimeter;
}
};