class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n=nums.size();
        int count=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
                return 0;
            else if(nums[i]<0)
            {
                count=count*(-1);
            }
        }
        return count;
    }
};