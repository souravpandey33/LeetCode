class Solution:
    def maxArea(self, height: List[int]) -> int:
        water, i, j=0, 0, len(height)-1
        while(i<j):
            if height[i]>height[j]:
                area=(height[j]) * (j-i)
                j-=1
            else:
                area=(height[i]) * (j-i)
                i+=1
            if area>water:
                water=area
        return water