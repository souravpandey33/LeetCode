class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        int size=nums.size();
        deque<int> q;
        int i=0;
        int j=0;
        while(j<size)
        {
            while(!q.empty() && nums[j]>q.back())
            {
                q.pop_back();
            }
            q.push_back(nums[j]);
            if(j-i+1 < k)
            {
                j++;
            }
            else
            {
                ans.push_back(q.front());
                
                if(nums[i]==q.front())
                {
                    q.pop_front();
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};