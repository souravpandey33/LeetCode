class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        int i,j,k,l;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(i=0;i<n-3;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;
            for(j=i+1;j<n-2;j++)
            {
                
                if(j>i+1 && nums[j]==nums[j-1])
                continue;
                
                k=j+1;
                l=n-1;
                
                while(k<l)
                {
                    long sum=(long)((long)nums[i]+(long)nums[j]+(long)nums[k]+(long)nums[l]);
                    
                    if(sum<target)
                        k=k+1;
                    else if(sum>target)
                            l=l-1;
                    else
                    {
                        result.push_back({nums[i],nums[j],nums[k],nums[l]});
                        k=k+1;
                        l=l-1;
                        
                        while(k<l && nums[l]==nums[l+1])
                            l=l-1;
                        while(k<l && nums[k]==nums[k-1])
                            k=k+1;
                    }
                }
            }
        }
        return result;
    }
};