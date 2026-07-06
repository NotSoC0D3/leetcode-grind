class Solution {
public:
    int maxArea(vector<int>& nums) {

        int L = 0, R = nums.size() - 1, maxA = INT_MIN;
        while (L < R) {
            int area = min(nums[L], nums[R]) * (R - L);
            maxA = max(maxA, area);

            if(nums[R] > nums[L]) L++;
            else R--;
        }

        return maxA;

    }
};