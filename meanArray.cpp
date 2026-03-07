#include<iostream>
using namespace std;

// int meanArray(int arr[],int n){            //mean of an array
//     int sum = 0;
//     for(int i=0; i<=n-1; i++){
//         sum += arr[i];
//     }
//     return (sum/n);

// }

// int revArray(int arr[], int n){              //reverse of an array
//     int temp;
//     int start = 0;
//     int end = n-1;
//     while(start<end){
//         temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
//     for(int i=0; i<=n-1; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// bool checkSorted(int arr[], int n){       //check if the array is sorted
//     for(int i = 0; i < n-1; i++){
//         if(arr[i+1]<arr[i]){
//             return false;
//         }
//     }
//     return true;
// }


int medianArray(int arr[], int n){              //median of an array
    if(n%2 != 0){
        cout<<arr[n/2]<<endl;
    }else{
        cout<<( arr[(n/2)-1] + arr[n/2] )/2 <<endl; 
    }
    return 0;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int arr2[10] = {1,2,4,5,64,16,7,8,9,10};
    medianArray(arr, 5);
    medianArray(arr2, 10);
    return 0;
}
