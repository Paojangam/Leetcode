class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int max_water=0;
        
        while(left<right){
            int width=right-left;
            int breadth=min(height[left],height[right]);
            int water=breadth*width;
            if(water>max_water){
                max_water=water;
            }
            if(height[left]<height[right]){
                left++;
            } 
            else{
                right--;
            }
        }
        return max_water;
    
    }
};
