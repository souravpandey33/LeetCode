class Solution {
public:
    char findTheDifference(string s, string t) {
        int n=s.size();
        unordered_map<char,int> m;
        for(int i=0;i<n;i++)
        {
            if(m[s[i]])
            {
                m[s[i]]++;
            }
            else
            {
                m[s[i]]=1;
            }
        }
        int l=t.size();
        for(int i=0;i<l;i++)
        {
            if(m[t[i]])
            {
                m[t[i]]--;
                if(m[t[i]]==0)
                    m.erase(t[i]);
            }
            else
                return t[i];
        }
        return ' ';
    }
};