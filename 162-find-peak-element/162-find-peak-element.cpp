class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return 0;
        int start=0;
        int end=nums.size()-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[start]>nums[start+1])
                return start;
            if(nums[end]>nums[end-1])
                return end;
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1] && mid>0 && mid<end)
                return mid;
            else if(nums[mid]>nums[mid+1] && mid<end)
                end=mid-1;
            else
                start=mid+1;
        }
        return -1;
    }
};