class Solution {
public:
    bool isValid(vector<int>& nums, int k, int n, int maxSum) {
        int sum = nums[0];
        int subArrays = 1;

        for(int i = 1; i < n; i++) {

            if(nums[i] > maxSum) {
                return false;
            }

            if(sum + nums[i] <= maxSum) {
                sum += nums[i];
            }
            else {
                subArrays++;
                sum = nums[i];
            }
        }

        return subArrays <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();

        int sum = 0;
        int st=INT_MIN;
        for(int i = 0; i < n; i++) {
            sum += nums[i];
            st= max(st,nums[i]);
        }

        int end = sum;
        int ans = -1;

        while(st <= end) {
            int mid = st + (end - st) / 2;

            if(isValid(nums, k, n, mid)) {
                ans = mid;
                end = mid - 1;
            }
            else {
                st = mid + 1;
            }
        }

        return ans;
    }
};
