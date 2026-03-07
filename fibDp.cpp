#include<iostream>
#include<vector>
using namespace std;

//most basic
int fib(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}


//DP
//1. Top - Down -> Recursion + Memoziation
int fibTop(int n,  vector<int> &arr){
    
    if(n==0 || n==1) return n;

    if(arr[n] != -1) return arr[n];

    return arr[n] = fibTop(n-1, arr) + fibTop(n-2, arr);

}

//2. Bottom - Up -> Tabulation
int fibTab(int n){
    if(n<=1) return n;
    int dp[n+1];
    dp[0]=0;
    dp[1]=1;
    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

//3. Most Efficient O(1) Space
int fibEff(int n){
    int prev1 = 1;
    int prev2 = 0;
    int current;
    for(int i=2; i<=n; i++){
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    return current;
}

int main(){

    int n;
    cin>>n;

    //most basics
    cout<<fib(n)<<endl;;
    //1.
    vector<int> arr(n+1, -1);       //inital a vector array of size n+1, with all element = -1
    cout<< fibTop(n, arr)<<endl;
    //2.
    cout<< fibTab(n)<<endl;
    //3.
    cout<< fibEff(n)<<endl;

    return 0;
}
