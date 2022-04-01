class Solution {
public:
    void reverseString(vector<char>& s) {
        char ch;
        int n=s.size();
        int i=0;
        cout<<n;
        while(i<(n/2))
        {
            ch=s[i];
            s[i]=s[n-1-i];
            s[n-1-i]=ch;
            i++;
        }
    }
};