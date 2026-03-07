#include<iostream>
#include<vector>
using namespace std;

int rangeSum(vector<int>& arr, int l, int r){
    int n = arr.size();
    vector<int> preSum(n);
    preSum[0] = arr[0];
    for(int i=1; i<n; i++){
        preSum[i] = preSum[i - 1] + arr[i];
    }
    if(l == 0) return preSum[r];
    int sum = preSum[r] - preSum[l - 1];
    return sum;
}


int maxSumSubArray(vector<int>& arr, int k){ //sliding window with fix window size
    int n= arr.size();
    if(k > n) return 0;
    int sum = 0, maxSum = 0;
    for(int i=0; i<k; i++){
        sum += arr[i];
        maxSum = sum;
    }

    for(int i=k; i < n; i++){
        sum = sum + arr[i] - arr[i - k];
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}

int main(){
    // vector<int> arr = {2,4,1,3,6};
    // cout<<rangeSum(arr, 2,4)<<endl;

    // vector<int> arr = {1,  2, 3};
    // cout<<subarraySum(arr, 3)<<endl;

    vector<int> arr = {100, 200, 300, 400};
    cout<<maxSumSubArray(arr, 2)<<endl;
    cout<<maxSumSubArray(arr, 5)<<endl; //edge case


    return 0;
}