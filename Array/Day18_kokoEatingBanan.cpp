class Solution {
public:
    bool isValid(vector<int>& piles, int h, int k) {
        long curH = 0;

        for (int i = 0; i < piles.size(); i++) {
    curH += (piles[i] + k - 1) / k;

            if (curH > h) {
                return false;
            }
        }

        return true;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int st = 1;
        int end = *max_element(piles.begin(), piles.end());
        int ans = end;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (isValid(piles, h, mid)) {
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
