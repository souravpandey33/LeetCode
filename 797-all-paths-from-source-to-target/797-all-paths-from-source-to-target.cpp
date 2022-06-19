class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> result;
        vector<int> path;
        int n=graph.size();
        vector<bool> visit(n,false);
        path.push_back(0);
        check(graph,result,path,0,n,visit);
        return result;
    }
    
    void check(vector<vector<int>>& graph,vector<vector<int>> &result,vector<int> &path, int curr,int n, vector<bool> &visit)
    {
        if(curr==n-1)
        {
            result.push_back(path);
            return;
        }
        
        // if(visit[curr]==true)
        //     return;
        
        // visit[curr]=true;
        else
        {
            for(auto neigh:graph[curr])
            {
                path.push_back(neigh);
                check(graph,result,path,neigh,n,visit);
                path.pop_back();
            }
        }
        
        
        
        // visit[curr]=false;
    }
};