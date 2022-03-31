class Solution {
public:
    double average(vector<int>& salary) {
        int max=INT_MIN;
        int min=INT_MAX;
        int n=salary.size();
        double sum=0;
        for(int i=0;i<n;i++)
        {
            if(salary[i]>max)
                max=salary[i];
            if(salary[i]<min)
                min=salary[i];
            sum=sum+salary[i];
        }
        return (sum-max-min)/(n-2);
    }
};