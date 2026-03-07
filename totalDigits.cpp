#include<iostream>
using namespace std;

int countDigit(int x){
    int count = 0;
    while(x>0){
        x = x/10;
        count++;
    }
    return count;
}
int main(){
    cout<<countDigit(875915)<<endl;
    return 0;
}