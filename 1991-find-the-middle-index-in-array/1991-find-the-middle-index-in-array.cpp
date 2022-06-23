// Iterative Solution



class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        int leftSum=0;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
        }
        int rightSum=sum-nums[0];
        
        
        for(int i=0;i<n;i++)
        {
            if(leftSum==rightSum)
                return i;
            if(i<n-1){
                rightSum=rightSum-nums[i+1];
                leftSum=leftSum+nums[i];
            }
        }
        return -1;
    }
};



// Recursive Solution


// class Solution {
// public:
//     int index=-1;
//     int findMiddleIndex(vector<int>& nums) {
        
//         int n=nums.size();
//         int sum=0;
//         for(int i=0;i<n;i++)
//         {
//             sum=sum+nums[i];
//         }
//         check(nums,n,0,sum-nums[0],0);
//         return index;
//     }
    
//     void check(vector<int> &nums, int n, int curr, int sumRight, int sumLeft)
//     {
//         if(sumRight==sumLeft)
//         {
//             index=curr;
//             return;
//         }
//         if(curr==n-1)
//             return;
//         check(nums,n,curr+1,sumRight-nums[curr+1], sumLeft+nums[curr]);
//     }
// };