// // The API isBadVersion is defined for you.
// // bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start=1;
        int end=n;
        int ans=1;
        int mid;
        
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

// class Solution {
// public:
//     int firstBadVersion(int n) {
//         int end=n;
//         int start=1;
//         int mid;
//         int ans=1;
//         while(start<=end)
//         {
//             mid=start+(end-start)/2;
//             if(isBadVersion(mid)) // bad from mid or before mid
//             {
//                 ans=mid;
//                 end=mid-1;
//             }
//             else
//                 start=mid+1; // bad after mid
//         }
//         return ans;
//     }
// };