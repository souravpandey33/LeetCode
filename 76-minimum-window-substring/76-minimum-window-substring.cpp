class Solution {
public:
    string minWindow(string s, string t) {
        int i=0;
        int j=0;
        int m=INT_MAX;
        string ans;
        int size=s.size();
        unordered_map<char,int> mp;
        
        for(auto i:t)
        {
            mp[i]++;
        }
        
        int count=mp.size();
        
        while(j<size)
        {
            if(mp.find(s[j])!=mp.end())
            {
                mp[s[j]]--;
                if(mp[s[j]]==0)
                {
                    count--;
                }
            }
            
            if(count==0)
            {
                if(m>j-i+1)
                {
                    m=j-i+1;
                    ans=s.substr(i,m);
                }
            }
            
            while(i<=j && count==0)
            {
                if(mp.find(s[i])!=mp.end())
                {
                    mp[s[i]]++;
                    if(mp[s[i]]==1)
                    {
                        if(m>j-i+1)
                        {
                            m=j-i+1;
                            ans=s.substr(i,m);
                        }
                        count++;
                    }
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};