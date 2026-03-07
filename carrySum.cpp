/*
Problem Statement
A carry is a digit that is transferred to left if sum of digits exceeds 9 while adding two numbers from right-to-left one digit at a time
You are required to implement the following function.
Int NumberOfCarries(int num1 , int num2);
The functions accepts two numbers ‘num1’ and ‘num2’ as its arguments. You are required to calculate and return  the total number of carries 
generated while adding digits of two numbers ‘num1’ and ‘ num2’.
Assumption: num1, num2>=0
*/

#include<iostream>
using namespace std;

int numberOfCarries(int num1, int num2){
    int carry = 0, sum, p, q, count = 0;
    while(num1 != 0 && num2 != 0){
        p = num1 % 10;
        q = num2 % 10;
        sum = carry + p + q;
        if(sum > 9){
            carry = 1;
            count++;
        }else{
            carry = 0;
        }
        num1 = num1 / 10;
        num2 = num2 / 10;
    }
    while(num1 != 0){
        p = num1 % 10;
        sum = carry + p;
        if(sum > 9){
            carry = 1;
            count++;
        }
        else{
            carry = 0;
        }
        num1 = num1 / 10;
    }
    while(num2 != 0){
        q = num2 % 10;
        sum = carry + q;
        if(sum > 9){
            carry = 1;
            count++;
        }else{
            carry = 0;
        }
        num2 = num2 / 10;
    }
    return count;
}
int main(){
    cout<<numberOfCarries(451, 349);
    return 0;
}
