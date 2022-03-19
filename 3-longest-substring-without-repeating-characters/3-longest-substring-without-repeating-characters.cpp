class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;
        int maxl=0;
        int start=0;
        for(int i=0;i<s.size();i++)
        {
            if(m.count(s[i])>0)
            {
                start=max(start,m[s[i]]+1);
            }
            m[s[i]]=i;
            maxl=max(maxl,i-start+1);
        }
        return maxl;
    }
};