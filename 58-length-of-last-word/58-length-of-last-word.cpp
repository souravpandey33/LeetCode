class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        if(n==0)
            return 0;
        string st="";
        st=st+s[0];
        int flag=0;
        for(int i=1;i<n;i++)
        {
            cout<<s[i];
            if(s[i]==' ')
                flag=1;
            else
                flag=0;
            if(flag==0 && s[i-1]==' ')
            {
                st="";
                st=st+s[i];
            }
            else if(flag==0 && s[i-1]!=' ')
                st=st+s[i];
        }
        return st.size();
    }
};