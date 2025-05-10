class Solution {
public:
    int maxArea(vector<int>& height) {
        int minmum = 0;
        int i=0;
        int j=height.size()-1;
        int maxWater= 0;
        while(i<j){
            minmum = min(height[i],height[j]);
            maxWater =max(maxWater,(j-i)*minmum);
            (height[i] < height[j]) ? i++ : j--;
        }

        return maxWater;
    }
};
