class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int size=nums.size();
        int ans=0;
        int p=1;
        
        while(j<size)
        {
            p=p*nums[j];
            while(i<=j && p>=k)
            {
                p=p/nums[i];
                i++;
            }
            ans=ans+(j-i+1);
            j++;
        }
        return ans;
    }
};