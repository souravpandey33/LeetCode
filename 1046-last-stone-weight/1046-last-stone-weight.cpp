class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(),stones.end(),greater<int>());
        while(stones.size()>1)
        {
            sort(stones.begin(),stones.end(),greater<int>());
            cout<<stones[0]<<" "<<stones[1];
            if(stones[0]-stones[1]==0)
            {
                stones.erase(stones.begin()+1);
                stones.erase(stones.begin());
            }
            else
            {
                stones[0]=stones[0]-stones[1];
                stones.erase(stones.begin()+1);
            }
        }
        if(stones.size()==1)
            return stones[0];
        else
            return 0;
    }
};