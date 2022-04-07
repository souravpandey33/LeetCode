class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l1=word1.size();
        int l2=word2.size();
        if(l1==0)
            return word2;
        if(l2==0)
            return word1;
        string s="";
        int i=0;
        while(l1>0 && l2>0)
        {
            s=s+word1[i]+word2[i];
            i++;
            l1--;
            l2--;
        }
        while(l1>0)
        {
            s=s+word1[i];
            i++;
            l1--;
        }
        while(l2>0)
        {
            s=s+word2[i];
            i++;
            l2--;
        }
        return s;
    }
};