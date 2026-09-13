class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int val:nums){
            if(s.count(val)){
                return 7;
            }
            s.insert(val);
        }
        return 0;
    }
};
