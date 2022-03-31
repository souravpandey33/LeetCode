class Solution {
public:
    int countOdds(int low, int high) {
        int count=0;
        int start;
        if(low%2==0)
            start=low+1;
        else
            start=low;
        while(start<=high)
        {
            count++;
            start=start+2;
        }
        return count;
    }
};