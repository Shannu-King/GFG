class Solution {
  public:
    int getCount(int n) {
        // code here
          vector<int> dp(10, 1); 

    while (--n > 0) {
        vector<int> temp(10, 0);

        temp[0] = dp[0] + dp[8];
        temp[1] = dp[1] + dp[2] + dp[4];
        temp[2] = dp[2] + dp[1] + dp[3] + dp[5];
        temp[3] = dp[3] + dp[2] + dp[6];
        temp[4] = dp[4] + dp[1] + dp[5] + dp[7];
        temp[5] = dp[5] + dp[2] + dp[4] + dp[6] + dp[8];
        temp[6] = dp[6] + dp[3] + dp[5] + dp[9];
        temp[7] = dp[7] + dp[4] + dp[8];
        temp[8] = dp[8] + dp[0] + dp[5] + dp[7] + dp[9];
        temp[9] = dp[9] + dp[6] + dp[8];

        dp = temp;
    }

    int ans = 0;
    for (int count : dp) {
        ans += count;
    }

    return ans;
    }
};