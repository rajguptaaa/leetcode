#include<iostream>
using namespace std;

int recuNumm(int n){         //print from n to 1
    if( n == 0 ){
        return 1;
    }
    cout<<n<<" ";
    recuNumm( n - 1 );
    return 0;
}

// int recuNum(int n){         //print from 1 to n
//     if(n==0) return 0;
//     recuNum(n-1);
//     cout<<n<<" ";

//     return 0;
// }

// int fabN(int n){                //fib. series
//     if(n<=1) return n;
//     int a=0, b=1, c;
//     for(int i=2; i<=n; i++){
//         c = a+b;
//         a = b;
//         b = c;
//     }
//     return b;
// }

int fibN(int n){                 //fib with recursion
    if(n<=1) return n;
    return fibN(n-1)+fibN(n-2);
} 

// int fact(int n){                 //factorial by recursive method
//     if(n == 0 || n == 1){
//         return 1;
//     }
//     return n*fact(n-1);
// }

// int getSum(int n){                  //sum of natural numbers busing recursion
//     if(n==0) return 0;
//     return n+getSum(n-1);
// }


//  int digitSum(int n){                   //sum of digits of a given number
//     int res = 0;
//     while(n>0){
//         res = res + n%10;
//         n = n/10;
//     }
//     return res;
// }


int main(){
    cout<<fibN(15)<<endl;
    return 0;
}