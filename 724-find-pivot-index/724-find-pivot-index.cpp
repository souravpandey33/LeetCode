class Solution {
public:
    int index=-1;
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
        }
        check(nums,n,0,sum-nums[0],0);
        return index;
    }
    
    void check(vector<int> &nums, int n, int curr, int sumRight, int sumLeft)
    {
        if(sumRight==sumLeft)
        {
            index=curr;
            return;
        }
        if(curr==n-1)
            return;
        check(nums,n,curr+1,sumRight-nums[curr+1], sumLeft+nums[curr]);
    }
    
};