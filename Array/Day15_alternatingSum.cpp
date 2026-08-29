class Solution {
public:
    int alternatingSum(vector<int>& nums) {
       int ans =nums[0];
      for(int i=1;i<nums.size();i++){
          if(i%2==0){
              ans+=nums[i];
          }
          else {
              ans-=nums[i];
          }
          }
         return ans;
    }
};
