class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> map(nums.begin(), nums.end());

        int Max = 0;

        for (int n: nums) {
            if (map.find(n - 1) == map.end()) {
                int streak = 1;
                int curr = n;

                while(map.find(curr + 1) != map.end()) {
                    curr++;
                    streak++;
                    map.erase(curr);
                }

                Max = max(Max, streak);
            }

        }

        return Max;
    }
};