class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        int mid;
        while(start<=end)
        {
            cout<<end<<endl;
            mid=start+(end-start)/2;
            if(nums[mid]>target)
                end=mid-1;
            else if(nums[mid]<target)
                start=mid+1;
            else
                return mid;
        }
        cout<<end;
        return end+1;
    }
};