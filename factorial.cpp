#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n=5;
    cout<<"Factorial: "<<fact(n)<<endl;

    // cout << "\"" << n << "\"" << endl; //checking how to print 👉 "" 
    return 0;
}