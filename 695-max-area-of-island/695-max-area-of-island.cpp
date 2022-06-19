class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;
        int row=grid.size();
        int col=grid[0].size();
        for(int currRow=0;currRow<row;currRow++)
        {
            for(int currCol=0;currCol<col;currCol++)
            {
                if(grid[currRow][currCol]==1)
                {
                    ans=max(ans,check(grid,row,col,currRow,currCol));
                }
            }
        }
        return ans;
    }
    
    int check(vector<vector<int>> &grid, int row, int col, int currRow, int currCol)
    {
        if(currRow>=row || currRow<0 || currCol>=col || currCol<0 || grid[currRow][currCol]==0)
            return 0;
        
        grid[currRow][currCol]=0;
        
        int c=1;
        c=c+check(grid,row,col,currRow-1,currCol);
        c=c+check(grid,row,col,currRow+1,currCol);
        c=c+check(grid,row,col,currRow,currCol-1);
        c=c+check(grid,row,col,currRow,currCol+1);
        
        return c;
    }
};