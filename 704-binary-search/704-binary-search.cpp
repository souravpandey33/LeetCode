class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size=nums.size();
        int start=0;
        int end=size-1;
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(target==nums[mid])
                return mid;
            else if(target>nums[mid])
                start=mid+1;
            else
                end=mid-1;
                
        }
        return -1;
    }
};