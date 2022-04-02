class Solution {
public:
    string reverseWords(string s) {
        s=s+' ';
        int n=s.size();
        string rev="";
        string st="";
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==' ')
            {
                rev=rev+st+' ';
                st="";
            }
            else
            {
                st=s[i]+st;
            }
        }
        rev=rev+st;
        return rev;
    }
};