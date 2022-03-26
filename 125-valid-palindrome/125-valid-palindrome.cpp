class Solution {
public:
    bool isPalindrome(string s) {
        int count=0;
        for(int i=0;s[i];i++)
        {
            if(isdigit(s[i]) || isalpha(s[i]))
                s[count++]=s[i];
        }
        s[count]='\0';
        for(int i=0;i<count;i++)
        {
            s[i]=tolower(s[i]);
        }
        int start=0;
        int end=count-1;
        while(start<=end)
        {
            if(s[start]!=s[end])
                return false;
            start++;
            end--;
        }
        return true;
    }
};