class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        set<int> row;
        set<int> col;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(row.find(i)!=row.end() || col.find(j)!=col.end())
                {
                    matrix[i][j]=0;
                }
            }
        }
    }
};
//     void setZeroes(vector<vector<int>>& matrix) {
//         unordered_set<int> row;
//         unordered_set<int> col;
        
//         for(int i=0;i<matrix.size();i++)
//         {
//             for(int j=0;j<matrix[0].size();i++)
//             {
//                 if(matrix[i][j]==0)
//                 {
//                     row.insert(i);
//                     col.insert(j);
//                     cout<<i<<"  "<<j<<endl;
//                 }
//             }
//         }
        
//         for(int i=0;i<matrix.size();i++)
//         {
//             for(int j=0;j<matrix[0].size();j++)
//             {
//                 if(row.find(i)!=row.end() || col.find(j)!=col.end())
//                 {
//                     matrix[i][j]=0;
//                 }
//             }
//         }
//     }
// };


//     void setZeroes(vector<vector>& matrix) {
//     unordered_set rows, cols;

//     for(int i = 0; i < matrix.size(); i++){
//         for(int j = 0; j < matrix[0].size(); j++){
//             if(!matrix[i][j]){
//                 rows.insert(i);
//                 cols.insert(j);
//             }
//         }
//     }
    
//     for(auto i = rows.begin(); i != rows.end(); i++){
//         for(int j = 0; j < matrix[0].size(); j++){
//             matrix[*i][j] = 0;
//         }
//     }
    
//     for(auto i = cols.begin(); i != cols.end(); i++){
//         for(int j = 0; j < matrix.size(); j++){
//             matrix[j][*i] = 0;
//         }
//     }
//     }
// };