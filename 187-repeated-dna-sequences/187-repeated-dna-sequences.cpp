class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int> mp;
        int i=0;
        int j=0;
        int size=s.size();
        vector<string> ans; 
        for(i=0;i<=size-10;i++)
        {
            string st=s.substr(i,10);
            mp[st]++;
            if(mp[st]==2)
                ans.push_back(st);
        }
        return ans;
    }
};