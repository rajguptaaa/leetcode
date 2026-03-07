#include<iostream>
#include<hashtable.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int hash[13] = {0};
    for(int i=0; i<n; i++){
        hash[arr[i]] += 1; 
    }

    int num;
    cin>>num;
    while(num--){
        int number;
        cin>>number;
        cout<<hash[number]<<endl;
    }

    return 0;
}

// 5                n input
// 1 2 1 2 3        array input
//5                 num input
// 1 2 3 4 5        numbers input (to search)

// 2               1 -> 2 (1 appears 2 times)
// 2               2 -> 2 ...
// 1               3 -> 1 ...
// 0               4 -> 0 ...
// 0               5 -> 0 ...

