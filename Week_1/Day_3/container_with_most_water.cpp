class Solution {
public:
    int maxArea(vector<int>& height) {
       int st=0, end= height.size()-1;
       int maxresult=0;
       
       while(st<end){
        int curr_width=end-st;
        int curr_height=min(height[st],height[end]);
        int area= curr_width*curr_height;
        maxresult= max(maxresult,area);
        if(height[st]<height[end]){
            st++;
        }
        else{
            end--;
        }
        }
        
       return maxresult;
    }
};