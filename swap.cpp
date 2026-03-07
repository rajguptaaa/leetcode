#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int inputArr(int arr[], int n){    //array input
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    return 0;
}

int outputArr(int arr[], int n){    //array output
    for(int i=0; i<n; i++){
        cout<<arr[i];
        if (i != n - 1) {
            cout << ", ";
        }
    }
    return 0;
}

void altSwap(int arr[],int n){    //swap alternate
    for(int i=0; i<n-1; i+=2){
        int temp = arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
}

void revArr(int i, int arr[],int n){     //reverse Array using (recursion)
    if(i>=n/2) return;
    swap(arr[i], arr[n-i-1]);
    revArr(i+1, arr, n);                 //recursion
}


int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];

    inputArr(arr, n);
    // altSwap(arr, n);
    revArr(0, arr, n);
    outputArr(arr, n);
    
    return 0;
}

