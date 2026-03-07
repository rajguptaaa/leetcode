#include<iostream>
using namespace std;

// int rec(int x){
//     if(x == 0) return 0;
//     for(int i = x; i > 0; i--){
//         cout << i << " ";
//     }
//     cout << endl;
//     rec(x - 1);
//     return 0;
// }

// int rec(int x){
//     if(x == 6) return 0;
//     for(int i = 1; i <= x; i++){
//         cout << i << " ";
//     }
//     cout << endl;
//     rec(x + 1);
//     return 0;
// }

// int rec(int x){
//     if(x == 0) return 0;
//     cout<<x<<" ";
//     rec(x-1);
//     return 0;
// }

// int rec2(int x){
//     if(x == 0) return 0;
//     cout<<x<<" ";
//     rec2(x/2);
//     return 0;
// }



// int fact(int x){
    // int n = 1;
    // for(int i =1; i<=x; i++){
    //     n *= i;
    // }
    // cout<<n<<" ";

//     if(x == 0){
//         return 1;
//     }
//     return x*fact(x-1);
// }

int main(){
    rec(5);
    cout<<endl;
    rec2(64);
    cout<<endl;
    cout<<fact(5)<<endl;
    return 0;
}

