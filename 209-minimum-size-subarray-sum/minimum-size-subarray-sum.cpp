class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int L = 0, R =  0;
        int sum = 0;
        int minlen = INT_MAX;
        
        for(R = 0; R < nums.size(); ++R){
            sum += nums[R];

            while(sum >= target){
                minlen = min(minlen, R - L + 1);
                sum -= nums[L];
                L++;
            }
        }

        if (minlen == INT_MAX) return 0;
        else return minlen;
    }
};