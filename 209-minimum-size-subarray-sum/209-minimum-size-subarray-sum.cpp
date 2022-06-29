class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int j=0;
        int m=INT_MAX;
        int size=nums.size();
        int sum=0;
        
        while(j<size)
        {
            sum=sum+nums[j];
            if(sum<target)
            {
                j++;
            }
            else
            {
                while(sum>=target)
                {
                    m=min(m,j-i+1);
                    sum=sum-nums[i];
                    i++;
                }
                j++;
            }
        }
        if(m==INT_MAX)
            return 0;
        return m;
    }
};