#include<iostream>
#include<vector>
using namespace std;

int fibTab(int n){
    if(n<=1) return 0;
    vector<int> dp(n+1);
    dp[0]=0;
    dp[1]=1;
    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    int sum = 0;
    for(int i=0; i<n; i++){
        if(dp[i] % 2 == 0){
            sum += dp[i];
        }
    }
    return sum;
}

int main(){
    int n = 9;
    cout<<fibTab(n);
    return 0;
}