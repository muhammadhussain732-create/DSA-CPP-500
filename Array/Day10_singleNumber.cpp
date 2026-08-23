class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int val:nums){
            // XOR operation 
            ans^=val;
        }
        return ans;
    }
};
