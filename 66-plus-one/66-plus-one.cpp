class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int boww=0;
        int n=digits.size()-1;
        if(digits[digits.size()-1]==9)
            boww=1;
        else
        {
            digits[n]=digits[n]+1;
            return digits;
        }
        
        while(boww==1 && n>=0)
        {
            if(digits[n]+1==10)
            {
                digits[n]=0;
            }
            else
            {
                digits[n]=digits[n]+1;
                return digits;
            }
            n--;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};