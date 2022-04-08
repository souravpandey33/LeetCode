class Solution {
public:
    string toLowerCase(string s) {
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(int(s[i])>64 && int(s[i])<91)
                s[i]=char(s[i]+32);
        }
        return s;
    }
};