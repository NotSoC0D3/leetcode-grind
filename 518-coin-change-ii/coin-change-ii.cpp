class Solution {
public:
    int dp[5005][305];

    int solv(int idx, int rem, vector<int>& coins){
        if(rem == 0) return 1;
        if(rem < 0) return 0;
        if(idx == coins.size()) return 0;

        if(dp[rem][idx] != -1) return dp[rem][idx];
        int take = solv(idx, rem - coins[idx], coins);
        int skip = solv(idx + 1, rem, coins);

        return dp[rem][idx] = take + skip;
    }

    int change(int amount, vector<int>& coins) {
        memset(dp, -1, sizeof(dp));
        return solv(0, amount, coins);

    }
};