#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
using namespace std;
// vector<int> nxtSmaller(vector<int>& arr){
//     int n = arr.size();
//     stack<int> s;
//     vector<int> res(n);
//     for(int i=n-1; i>=0; i--){
//         while(s.size() > 0 && s.top() > arr[i]){
//             s.pop();
//         }
//         if(s.empty()){
//             res[i] = -1;
//         }else{
//             res[i] = s.top();
//         }
//         s.push(arr[i]);
//     }
//     return res;
// }
vector<int> nxtSmaller(vector<int>& arr)
{
    int n=arr.size();
    vector<int> res(n, -1);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[i]){
                res[i] = arr[j];
                break;
            }
        }
    }
    return res;
}

int main(){
    vector<int> arr = {6,8,0,1,3};
    vector<int> ans = nxtSmaller(arr);
    for(int x : ans){
        cout<< x <<" ";
    }
    cout<<endl;
    return 0;
}
