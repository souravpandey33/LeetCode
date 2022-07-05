// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	
    	vector<int> arrr;
    	vector<int> depp;
    	
    	for(int i=0;i<n;i++)
    	{
    	    arrr.push_back(arr[i]);
    	    depp.push_back(dep[i]);
    	}
    	
    	sort(arrr.begin(),arrr.end());
    	sort(depp.begin(),depp.end());
    	
    	int i=0;
    	int j=0;
    	int platform=0;
    	int ans=0;
    	
    	while(i<n && j<n)
    	{
    	    if(arrr[i]<=depp[j])
    	    {
    	        i++;
    	        platform++;
    	    }
    	    else
    	    {
    	        j++;
    	        platform--;
    	    }
    	    if(ans<platform)
    	    {
    	        ans=platform;
    	    }
    	}
    	return ans;
    	
    }
};


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends