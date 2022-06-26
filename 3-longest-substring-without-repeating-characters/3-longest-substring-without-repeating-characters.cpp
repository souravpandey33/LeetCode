class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int size=s.size();
        int i=0;
        int j=0;
        int start=0;
        int end=0;
        int mx=0;
        
        if(size==1)
            return 1;
        while(j<size)
        {
            if(mp.find(s[j])!=mp.end())
            {
                start=max(start,mp[s[j]]+1);
                cout<<start<<endl;
                mp[s[j]]=j;
            }
            else
            {
                mp[s[j]]=j;
            }
            
            j++;
            end++;
            cout<<start<<"  "<<end<<endl;
            mx=max(mx,end-start);
        }
        return mx;
    }
};