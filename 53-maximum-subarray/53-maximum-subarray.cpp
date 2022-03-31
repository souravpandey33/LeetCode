class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr=0; 
        int maximum=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            curr=max(nums[i],curr+nums[i]);
            maximum=max(maximum,curr);
        }
        return maximum;
    }
};