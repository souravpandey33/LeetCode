class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int rep=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[abs(nums[i])-1]<0)
            {
                rep=abs(nums[i]);
                break;
            }
            else
            {
                nums[abs(nums[i])-1]*=-1;
            }
        }
        return rep;
    }
};