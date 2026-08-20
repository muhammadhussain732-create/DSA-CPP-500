class Solution {
public:
    int maxArea(vector<int>& height) {
      int st=0,end=height.size()-1;
      int maxAr=0;
      while (st<end){
         int w=end-st;
         int ht=min(height[st], height[end]);
        int curArea=w*ht;
       maxAr=max(maxAr, curArea);
       height[st]>height[end]?end--:st++;
         
      }
      return maxAr;
    }
};
