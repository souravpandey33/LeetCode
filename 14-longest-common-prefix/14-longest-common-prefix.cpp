class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)
            return "";
        if(strs.size()==1)
            return strs[0];
        
        string ans="";
        string s=strs[0];
        string news;
        
        for(int k=1;k<strs.size();k++)
        {
            int i=0;
            int j=0;
            news=strs[k];
            while(i<s.size() && j<news.size())
            {
                if(s[i]==news[j])
                {
                    ans.push_back(s[i++]);
                    j++;
                }
                else
                    break;
            }
            s=ans;
            ans="";
        }
        return s;
    }
};