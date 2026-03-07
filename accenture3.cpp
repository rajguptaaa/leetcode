#include<iostream>
#include<vector>
#include<climits>

using namespace std;

// int minK(vector<int> arr, int h){
//     int n = arr.size();
//     int maxi = INT_MIN;
//     for(int num : arr){
//         maxi = max(maxi, num);
//     }
//     for(int k=1; k<maxi; k++){
//         long long hours = 0;
//         for(int bananaas : arr){
//             hours += (bananaas + k - 1) / k;
//         }
//         if(hours <= h) return k;
//     }
//     return maxi;
// }

// int main(){
//     vector<int> arr = {3,6,7,4,11};
//     int  h = 8;
//     cout<<minK(arr, h)<<endl;

//     return 0;
// }


bool prime(int n){
    if(n <= 0) return false;
    if(n <= 3) return true;
    if(n%2 == 0 || n%3 == 0) return false;
    for(int i=5; i<=n; i+=6){
        if(n%i == 0 || n%(i+2) ==0) return true;
    } 
    return false;
}

int sumOfDigits(int n){
    int res;
    while(n > 0){
        res += n%10;
        n = n/10;
    }
    // return res;
    return prime(res);
}


int carrySum(int n, int m){
    int count = 0;
    int p, q, carry = 0;
    int sum = 0;
    while(n > 0 && m > 0){
        p = n%10;
        q = m%10;
        sum += carry + p + q;

        if(sum > 9){
            carry = 1;
            count++;
        }else{
            carry = 0;
        }
        n /= 10;
        m /= 10;
    }
    while(n > 0){
        p = n%10;
        sum += carry + p;
        if(sum > 9){
            carry = 1;
            count++;
        }else{
            carry = 0;
        }
        n /= 10;
    }
    while(m > 0){
        q = n%10;
        sum += carry + p;
        if(sum > 9){
            carry = 1;
            count++;
        }else{
            carry = 0;
        }
        m /= 10;
    }
    return count;
}



int main(){
    int n;
    cin>>n;
    // int m;
    // cin>>m;
    // cout<<prime(n)<<endl;
    cout<<sumOfDigits(n)<<endl;
    // cout<<carrySum(n, m)<<endl;

    return 0;
}