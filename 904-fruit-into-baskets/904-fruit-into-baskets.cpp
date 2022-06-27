class Solution {
public:
    int totalFruit(vector<int>& s) {
        unordered_map<int,int> mp;
        int j=0;
        int i=0;
        int ans=0;
        while(j<s.size())
        {
            mp[s[j]]++;
            if(mp.size()==2)
            {
                ans=max(ans,j-i+1);
            }
            else if(mp.size()<2)
            {
                ans=j-i+1;
            }
            else
            {
                while(mp.size()>2 && i<=j)
                {
                    mp[s[i]]--;
                    if(mp[s[i]]==0)
                    {
                        mp.erase(s[i]);
                    }
                    i++;
                }
            }
            j++;
        }
        return ans;
    }
};