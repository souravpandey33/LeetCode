class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        vector<int> check(n+1,0);
        for(int i=0;i<n;i++)
        {
            if(nums[i]>=0 && nums[i]<=n)
                check[nums[i]]=-1;
        }
        int i;
        for(i=1;i<=n;i++)
        {
            if(check[i]==0)
            {
                return i;
            }
        }
        return i;
    }
};