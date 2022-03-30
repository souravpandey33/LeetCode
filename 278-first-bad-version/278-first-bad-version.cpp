// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int end=n;
        int start=1;
        int mid;
        int ans=1;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(isBadVersion(mid))
            {
                ans=mid;
                end=mid-1;
            }
            else
                start=mid+1;
        }
        return ans;
    }
};