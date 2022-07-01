class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int ans=0;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]=='1')
                {
                    ans++;
                    check(grid,i,j,row,col);
                }
            }
        }
        return ans;
    }
    
    void check(vector<vector<char>> &grid,int row, int col, int maxrow, int maxcol)
    {
        if(row>=maxrow || col>=maxcol || col<0 || row<0 || grid[row][col]=='0')
            return;
        
        grid[row][col]='0';
        check(grid,row+1,col,maxrow,maxcol);
        check(grid,row-1,col,maxrow,maxcol);
        check(grid,row,col+1,maxrow,maxcol);
        check(grid,row,col-1,maxrow,maxcol);
    }
};

