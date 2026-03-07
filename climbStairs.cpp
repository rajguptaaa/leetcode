#include<iostream>
#include<vector>
using namespace std;

//1. Memoization
int solution(int n, vector<int>& dp){
    if(n==0) return 1;
    if(n<0) return 0;

    if(dp[n] != -1) return dp[n];

    dp[n] = solution(n-1, dp) + solution(n-2, dp);
    return dp[n];
}

//2. Tabulation
int sol2(int n){
    vector<int> dp(n+1, 0);
    dp[0] = 1;
    if(n>=1) dp[1] = 1;

    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2]; 
    }
    return dp[n];
}


int climbStairs(int n){

    if(n == 0 || n == 1) return 1;
    int prev1 = 1;
    int prev2 = 1;
    int current;

    for(int i=2; i<=n; i++){
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    return current;
}
int main(){
    int n=4;
    cout<<climbStairs(n)<<endl;
    return 0;
}

