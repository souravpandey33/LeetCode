// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    static bool cmp(vector<int>& v1,vector<int>& v2)
    {
        return v1[1]<v2[1];
    }
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        // Your code here
        vector<vector<int>> vec;
        vector<int> grp;
        for(int i=0;i<start.size();i++)
        {
            grp.push_back(start[i]);
            grp.push_back(end[i]);
            vec.push_back(grp);
            grp.clear();
        }
        sort(vec.begin(),vec.end(),cmp);
        
        int curr=vec[0][1];
        int ans=1;
        
        for(int i=1;i<vec.size();i++)
        {
            if(vec[i][0]>curr)
            {
                curr=vec[i][1];
                ans++;
            }
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends