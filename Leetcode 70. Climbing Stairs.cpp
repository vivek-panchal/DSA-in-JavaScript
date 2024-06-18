//Memoization
class Solution {
public:
    int solve(int n,vector<int>&dp){
        if(n<=2 && n>=0){
            return n;
        }
        if(dp[n]!=-1){
            return dp[n];
        }

        return dp[n]=solve(n-1,dp) + solve(n-2,dp);
    
    }
    int climbStairs(int n) {
       vector<int>dp(n+1,-1);
       return solve(n,dp);
    }
};

//Space Optemization
class Solution {
public:
    int climbStairs(int n) {
      int prev=1;
      int prev2=0;

      for(int i=1;i<=n;i++){
        int curr =prev+prev2;
        prev2=prev;
        prev=curr;
      }
      return prev;
    }
};
