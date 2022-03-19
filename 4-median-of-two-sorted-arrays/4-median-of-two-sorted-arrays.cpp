class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size())
        {  
            nums1.swap(nums2);
        }
        int m=nums1.size();
        int n=nums2.size();
        double median=0.0;
        int total=m+n;
        int start=0;
        int end=m;
        int pa,pb;
        int maxa,maxb,mina,minb;
        while(start<=end)
        {
            pa=(start+end)/2;
            pb=((m+n+1)/2)-pa;
            
            maxa=(pa==0)?INT_MIN:nums1[pa-1];
            mina=(pa==m)?INT_MAX:nums1[pa];
            
            maxb=(pb==0)?INT_MIN:nums2[pb-1];
            minb=(pb==n)?INT_MAX:nums2[pb];
            
            if(maxa<=minb && maxb<=mina)
            {
                if(total%2==0)
                {
                    median=(double)((double)(double)(max(maxa,maxb)+(double)min(mina,minb))/2);
                    return median;
                }
                else
                {
                    median=max(maxa,maxb);
                    return median;
                }
            }
            else
                if(maxa>minb)
                {
                    end=pa-1;
                }
                else{
                    start=pa+1;
                }
        }
        return 0.0;
    }
};