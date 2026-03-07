#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool mountainArr(vector<int>& arr){
    int n = arr.size();
    if(n < 3) return false;
    
    return true;
}

int main(){
    vector<int> arr ={0,3,2,1};
    cout<<mountainArr(arr)<<endl;
    return 0;
}
