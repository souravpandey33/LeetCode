class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int ans=0;
        for(int currRow=0;currRow<row;currRow++)
        {
            for(int currCol=0;currCol<col;currCol++)
            {
                if(grid[currRow][currCol]=='1')
                {
                    ans++;
                    check(grid,row,col,currRow,currCol);
                }
            }
        }
        return ans;
    }
    
    void check(vector<vector<char>> &grid, int row, int col, int currRow, int currCol)
    {
        if(currRow>=row || currRow<0 || currCol>=col || currCol<0 || grid[currRow][currCol]=='0')
            return;
        
        grid[currRow][currCol]='0';
        check(grid,row,col,currRow+1,currCol);
        check(grid,row,col,currRow-1,currCol);
        check(grid,row,col,currRow,currCol+1);
        check(grid,row,col,currRow,currCol-1);
    }
};