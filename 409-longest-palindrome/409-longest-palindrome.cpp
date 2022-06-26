class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        int n=s.size();
        
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        
        int flag=0;
        int sum=0;
        
        for(int i=0;i<n;i++)
        {
            if(mp[s[i]]!=-1)
            {
                if(mp[s[i]]%2==0)
                {
                    sum=sum+mp[s[i]];
                    mp[s[i]]=-1;
                }
                else
                {
                    sum=sum+mp[s[i]]-1;
                    mp[s[i]]=-1;
                    flag=1;
                }
            }
        }
        if(flag==1)
            return sum+1;
        return sum;
        
    }
};