#include<iostream>
#include<vector>
using namespace std;
int maSumSubArray(vector<int>& arr, int k){
    int n = arr.size();
    int maxSum = INT_MIN;
    for(int i=0; i<k; i++){
        maxSum += arr[i];
    }
    
}

int main(){
    vector<int> arr = {100, 200, 300, 400};
    int k = 2;
    cout<<maSumSubArray(arr, k)<<endl;    

    return 0;
}