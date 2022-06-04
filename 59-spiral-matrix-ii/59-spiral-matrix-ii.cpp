class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int> (n,0));
        int rowS=0;
        int rowE=n-1;
        int colS=0;
        int colE=n-1;
        // for(int i=0;i<ans.size();i++)
        // {
        //     for(int j=0;j<ans[0].size();j++)
        //     {
        //         cout<<ans[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        int c=1;
        while(1)
        {
            for(int i=colS;i<=colE;i++)
            {
                ans[rowS][i]=c++;
            }
            rowS++;
            if(c>(n*n))
                break;
            
            
            for(int i=rowS;i<=rowE;i++)
            {
                ans[i][colE]=c++;
            }
            colE--;
            if(c>(n*n))
                break;
            
            
            for(int i=colE;i>=colS;i--)
            {
                ans[rowE][i]=c++;
            }
            rowE--;
            if(c>(n*n))
                break;
            
            
            for(int i=rowE;i>=rowS;i--)
            {
                ans[i][colS]=c++;
            }
            colS++;
            if(c>(n*n))
                break;
        }
        return ans;
    }
};