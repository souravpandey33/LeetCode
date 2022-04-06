class Solution {
public:
    int arrangeCoins(int n) {
        int low=1;
        int high=INT_MAX;
        long mid;
        long count;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            count=(mid*(mid+1))/2;
            if(count==n)
                return mid;
            else if(count>n)
                high=mid-1;
            else
                low=mid+1;
        }
        return high;
    }
};