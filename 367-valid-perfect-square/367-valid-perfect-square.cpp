class Solution {
public:
    bool isPerfectSquare(int num) {
        int start=1;
        int end=num;
        long mid;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            long val=(mid)*(mid);
            if(val==num)
                return true;
            else if(val>num)
                end=mid-1;
            else
                start=mid+1;
        }
        return false;
    }
};