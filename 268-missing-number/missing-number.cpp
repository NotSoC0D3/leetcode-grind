class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int a;
        unordered_set<int> set;
        int n = nums.size() + 1;
        for (int n: nums){
            set.insert(n);
        }
        for (int i = 0; i < n; ++i){
            if (set.find(i) == set.end()){
                a = i;
            }
        }
        return a;
    }
};