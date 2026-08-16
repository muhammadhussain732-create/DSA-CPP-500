//Leet code 1.Two sum
//space complexity O(1). 
//Time complexity O(n^2)


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();

       for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }

        return {};
    }
};
