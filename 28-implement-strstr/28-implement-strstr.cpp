class Solution {
public:
    int strStr(string haystack, string needle) {
        int x=haystack.size();
        int y=needle.size();
        int i=0;
        int j=0;
        if(y==0)
            return 0;
        for(i=0;i<=x-y;i++)
        {
            j=0;
            while(j<y && haystack[i+j]==needle[j])
            {
                j++;
            }
            if(j==y)
                return i;
        }
        return -1;
    }
};