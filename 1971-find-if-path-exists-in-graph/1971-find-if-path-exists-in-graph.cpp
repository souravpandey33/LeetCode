class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> graph(n);
        
        for(int i=0;i<edges.size();i++)
        {
            int p1=edges[i][0];
            int p2=edges[i][1];
            
            graph[p1].push_back(p2);
            graph[p2].push_back(p1);
        }
        vector<bool> visit(n,false);
        return check(source,destination,graph,visit);
    }
    
    bool check(int source, int dest, vector<vector<int>> &graph, vector<bool> &visit)
    {
        if(source==dest)
            return true;
        visit[source]=true;
        
        for(int i=0;i<graph[source].size();i++)
        {
            if(visit[graph[source][i]]==false)
            {
                if(check(graph[source][i],dest,graph,visit)==true)
                    return true;
            }
        }
        return false;
    }
    
};