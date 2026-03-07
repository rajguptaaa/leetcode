#include<iostream>
#include<vector>
using namespace std;
void sortColors(vector<int>& arr){
    int n = arr.size();
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }  
}
int main(){
    vector<int> a={2,0,1,2,1,0};
    sortColors(a);
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
