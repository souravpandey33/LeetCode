class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> row;
        vector<vector<int>> pascal;
        row.push_back(1);
        pascal.push_back(row);
        if(numRows==1)
            return pascal;
        row.push_back(1);
        pascal.push_back(row);
        if(numRows==2)
            return pascal;
        for(int i=3;i<=numRows;i++)
        {
            row.clear();
            row.push_back(1);
            for(int j=1;j<i-1;j++)
            {
                row.push_back(pascal[i-2][j-1]+pascal[i-2][j]);
            }
            row.push_back(1);
            pascal.push_back(row);
        }
        return pascal;
    }
};