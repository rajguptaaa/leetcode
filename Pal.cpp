//                                                   int palindrome
#include<iostream>
using namespace std;

// bool isPal(int x){

//     int rev = 0;
//     int temp = x;
//     while(temp!=0){
//         int ld = temp % 10;
//         rev = rev * 10 + ld;
//         temp = temp / 10;
//     }
//     return(rev==x);
// }

int isRev(int x){
    int temp = x;
    int rev = 0;
    while(temp != 0){
        int ld = temp % 10;
        rev = rev * 10 + ld;
        temp = temp / 10;
    }
    return rev;
}

int main(){
    if(isRev(123)==321){
        cout<<"true"<<endl;
    } else{
        cout<<"false";
    }
    return 0;
}

