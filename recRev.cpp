#include<iostream>
#include<vector>
using namespace std;

int printNtoOne(int n){ //print from n to 1
    if(n == 0) return 0;
    cout<<n<<" ";
    printNtoOne(n-1);

    return 0;
}

int printOnetoN(int n){ //print from 1 to n
    if(n == 0) return 0;
    printOnetoN(n-1);
     cout<<n<<" ";

    return 0;
}

int sumTillN(int n){ //sum of n natural numbers
    if(n==0) return 0;
    return n+sumTillN(n-1);
} 

int prodOnetoN(int n){
    // if(n==0) return 0;
    if(n==1) return 1;
    return n*prodOnetoN(n-1);
}

int fib(int n){
    if(n<=1) return n;

    // int a = 0;
    // int b = 1;
    // int c;
    // for(int i=2; i<n; i++){
    //     c = a+b;
    //     a = b;
    //     b = c;
    // }
    // return b;

    return fib(n-1)+fib(n-2); //recur
}

void printArr(vector<int>& arr, int n) { //n to 0
    if (n == 0) return;
    cout << arr[n - 1] << " ";
    printArr(arr, n - 1);
}

// void printArr(vector<int>& arr, int n) { //0 to n index
//     if (n == 0) return;
//     printArr(arr, n - 1);
//     cout << arr[n - 1] << " ";
// }

int maxiEle(vector<int>& arr, int n){
    if(n == 0) return arr[0];
    return max(arr[n], maxiEle(arr, n-1));
}

int miniEle(vector<int>& arr, int n){
    if(n == 0) return arr[0];
    return min(arr[n], miniEle(arr, n-1));
}


int main(){
    // printNtoOne(8);
    // cout<<endl;
    // cout<<sumTillN(5)<<endl;
    // printOnetoN(8);
    // cout<<endl;
    // cout<<prodOnetoN(5)<<endl;
    // cout<<fib(8)<<endl;

    // vector<int> arr ={1,2,5,4,3};
    // printArr(arr, arr.size());
    // cout<<endl;
    // cout<<maxiEle(arr, arr.size())<<endl;

    vector<int> arr2 = {1,-2,-5,0,2};
    cout<<miniEle(arr2, arr2.size())<<endl;

    return 0;
}