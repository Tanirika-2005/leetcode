class Solution {
public:
int islandPerimeter(vector<vector<int>>& grid) {
    int perimeter = 0;
    int rows = grid.size();
    int cols = grid[0].size();

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            if (grid[i][j] == 1) 
            {
                int n = 0;

                if (i > 0 && grid[i-1][j] == 1) 
                n++;
                if (i < (rows-1) && grid[i+1][j] == 1) 
                n++;
                if (j > 0 && grid[i][j-1] == 1) 
                n++;
                if (j < cols-1 && grid[i][j+1] == 1) 
                n++;

                perimeter += (4 - n);
            }
        }
    }

    return perimeter;
}
};