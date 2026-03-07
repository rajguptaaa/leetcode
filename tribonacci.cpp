#include<iostream>
#include<vector>

using namespace std;


//space optimisation
int tribonacciN(int n){
    //base case
    if(n == 0) return 0;
    if(n == 1 || n == 2) return 1;


    int prev1 = 1;
    int prev2 = 1;
    int prev3 = 0;
    int curr;
    for(int i=3; i<=n; i++){
        curr = prev3 + prev2 + prev1;
        prev3 = prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;

}

//most basic 
int tri(int n){
    if(n == 0) return 0;
    if(n == 1 || n == 2) return 1;

    return tri(n-1) + tri(n-2) + tri(n-3);
}


//top down -> recursion + memoziation
int triMemo(int n, vector<int>& dp){
    if(n == 0) return 0;
    if(n == 1 || n == 2) return 1;

    if(dp[n] != -1) return dp[n];

    return dp[n] = triMemo(n-1, dp) + triMemo(n-2, dp) + triMemo(n-3, dp);
}

//buttom down -> tabulation
int triTab(int n){
    if(n == 0) return 0;
    if(n == 1 || n == 2) return 1;

    int dp[n+1];
    dp[0]=0;
    dp[1]=1;
    dp[2]=1;

    for(int i=3; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }
    return dp[n];
}

int main(){

    int n = 8;
    // cout<<n<<"th tribonacci number is "<<tribonacciN(n)<<endl;
    // for(int i=0; i<n; i++){
    //     cout<<tribonacciN(i)<<" ";
    // }

    // cout<<tri(n)<<endl;

    // vector<int> arr(n+1, -1);
    // cout<<triMemo(n, arr);

    cout<<triTab(n)<<endl;

    return 0;
}