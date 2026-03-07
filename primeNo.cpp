#include<iostream>
using namespace std;


bool primeNo(int x){
    if(x==1) return false;
    if(x==2 || x==3) return true;
    if(x%2==0 || x%3==0) return false;
    for(int i=5; i*i<=x; i=i+6){
        if(x%i == 0 || x%(i+2)==0){
            return false;
        }
    }
    return true;
}
int main(){
    cout<<primeNo(1)<<endl;
    return 0;
}















