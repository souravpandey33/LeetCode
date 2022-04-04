class Solution {
public:
    vector<int> searchRange(vector<int>& a, int target)
    {
        int s=0;
        int e=a.size()-1;
        int m;
        vector<int> ans(2,-1);
        while(s<=e)
        {
            m=s+(e-s)/2;
            if(a[m]>target)
                e=m-1;
            else if(a[m]<target)
                s=m+1;
            else
            {
                if(m==s || a[m]!=a[m-1])
                {
                    ans[0]=m;
                    break;
                }
                else
                {
                    ans[0]=m-1;
                    e=m-1;
                }
            }
        }
        s=0;
        e=a.size()-1;
        while(s<=e)
        {
            m=s+(e-s)/2;
            if(a[m]>target)
                e=m-1;
            else if(a[m]<target)
                s=m+1;
            else
            {
                if(m==e || a[m]!=a[m+1])
                {
                    ans[1]=m;
                    break;
                }
                else
                {
                    ans[1]=m+1;
                    s=m+1;
                }
            }
        }
        return ans;
    }
};