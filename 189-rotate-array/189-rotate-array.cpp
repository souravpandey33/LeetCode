class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        int left=0; 
		int right=nums.size()-k;
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++){
            if(right<=nums.size()-1){
                ans[i]=nums[right];
                right++;
            }else{
                ans[i]=nums[left];
                left++;
            }
        }
        nums=ans;
    }
};