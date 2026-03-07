#include<iostream>
using namespace std;
void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min_idx=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        swap(arr[min_idx], arr[i]);
    }
}
int main(){
    int a[]={2,34,5,6,7,89, 23, 1};
    selectionSort(a,8);
    for(int i=0; i<8; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}