class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        // if only one element is present
        if(n==1)
            return 0;
        int start=0;
        int end=nums.size()-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[start]>nums[start+1]) // if element at start index is peak
                return start;
            if(nums[end]>nums[end-1])   // if element at end index is peak
                return end;
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1] && mid>0 && mid<end) // if element at mid is peak
                return mid; 
            else if(nums[mid]>nums[mid+1]) // if peak is in the first half
                end=mid-1;
			else                           // if peak is in the second half
                start=mid+1;
        }
        return -1;
    }
};