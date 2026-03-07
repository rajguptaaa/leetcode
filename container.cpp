#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int containerWithMostWater(vector<int>& arr){
    int n = arr.size();
    int s = 0, e = n-1;
    int maxWater = 0;
    while(s < e){
        int minHeight = min(arr[s], arr[e]);
        int dis = e - s;
        int maxi = minHeight * dis;
        maxWater = max(maxWater, maxi);
        if(arr[s] < arr[e]){
            s++;
        }else if(arr[s] > arr[e]){
            e--;
        }
    }
    return maxWater;

}
int main(){
    vector<int> arr = {1,5,4,3};
    cout<<containerWithMostWater(arr)<<endl;
    return 0;
}
