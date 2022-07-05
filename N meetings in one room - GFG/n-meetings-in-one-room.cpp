// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    static bool cmp(vector<int>& v1,vector<int>& v2)
    {
        return v1[1]<v2[1];
    }
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<vector<int>> vec;
        vector<int> grp;
        
        for(int i=0;i<n;i++)
        {
            grp.push_back(start[i]);
            grp.push_back(end[i]);
            vec.push_back(grp);
            grp.clear();
        }
        
        sort(vec.begin(),vec.end(),cmp);
        
        int curr=vec[0][1];
        int ans=1;
        
        for(int i=1;i<n;i++)
        {
            if(vec[i][0]>curr)
            {
                ans++;
                curr=vec[i][1];
            }
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends