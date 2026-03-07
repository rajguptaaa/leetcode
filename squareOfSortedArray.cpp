#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> squaredArr(vector<int>& arr){
    int n = arr.size();
    int l = 0, r = n - 1;
    vector<int> ans(n);
    int k = n - 1;
    while(l <= r){
        int v1 = arr[l]*arr[l];
        int v2 = arr[r]*arr[r];
        if(v1 > v2){
            ans[k--] = v1;
            l++;
        }else{
            ans[k--] = v2;
            r--;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {-4,-1,0,3,10};
    vector<int> res = squaredArr(arr);
    for(int num : res){
        cout<<num << " ";
    }
    return 0;
}