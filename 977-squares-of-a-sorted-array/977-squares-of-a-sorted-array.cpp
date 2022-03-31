class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        int count=end;
        vector<int> ans(count+1,0);
        while(count>=0)
        {
            if(abs(nums[start])<abs(nums[end]))
                ans[count--]=nums[end]*nums[end--];
            else
                ans[count--]=nums[start]*nums[start++];
        }
        return ans;
    }
};