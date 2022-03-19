class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int i,j,k;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int diff=INT_MAX;
        int d;
        int sum;
        for(i=0;i<n;i++)
        {
            j=i+1;
            k=n-1;
            while(j<k)
            {
                d=abs(target-(nums[i]+nums[j]+nums[k]));
                if(diff>=d)
                {
                    diff=d;
                    sum=nums[i]+nums[j]+nums[k];
                }
                if((nums[i]+nums[j]+nums[k])<=target)
                {    
                    j=j+1;
                }
                else{
                    k=k-1;
                }
            }
        }
        return sum;
    }
};