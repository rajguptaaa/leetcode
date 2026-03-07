#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<climits>
#include<cmath>
using namespace std;

/*
int fun(string str){
    int c1 = 0, c2 = 0;
     for(char ch : str){
        if(ch == '#') c1++;
        else if(ch == '*') c2++;
    }
    if(c1==c2) return 0;
    if(c1>c2) return 1;
    if(c1<c2) return -1;

    return 0;
}

int main(){
    string str;
    getline(cin, str);
    cout<<fun(str);
    return 0;
}
*/

/*
int countWrong(vector<int>& arr){
    int n = arr.size();
    int count = 0;
    for(int i=1; i<n; i++){
        if(arr[0] == arr[i]) count++;
    }
    return count > 0 ? count : -1;

}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<countWrong(arr);
    return 0;
}
*/

/*
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int count = 1;
    
    int maxSoFar = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] > maxSoFar){
            count++;
            maxSoFar = arr[i];
        }
    }
    cout<<count;
    return 0;
}
*/

/*
int main(){
    int n;
    cin>>n;
    vector<char> ch(n);
    for(int i=0; i<n; i++){
        cin>>ch[i];
    }
    unordered_map<char, int> mp;
    for(char c : ch){
        mp[c]++;
    }
    for(char c : ch){
        if(mp[c] %2 != 0){
            cout<<c;
            return 0;
        }
    }
    cout<<"All are even";
    return 0;
}
*/

/*
int main(){
    int n = 3, m = 3;
    // cin>>n, m;

    vector<int> arr1 = {1,2,3};
    vector<int> arr2 = {2,5,6};

    arr1.resize(n+m);
    
    int i = n-1, j = m-1, k = n+m-1;
    while(i >=0 && j>= 0){
        if(arr1[i] > arr2[j]){
            arr1[k] = arr1[i];
            k--;
            i--;
        }else{
            arr1[k] = arr2[j];
            k--;
            j--;
        }
    }
    while(j >= 0){
        arr1[k] = arr2[j];
        k--;
        j--;
    }

    int s = arr1.size();
    for(int i=0; i<s; i++){
        cout<<arr1[i]<<" ";
    }
    return 0;
}
*/

// bool palindrome(string s){
//     int l=0, r = s.length()-1;
//     while(l <= r){
//         if(s[l] != s[r]){
//             return false;
//         }
//         l++;
//         r--;
//     }
//     return true;
// }

int armStrong(int a){
    int temp = a;
    int countD= 0;
    while(temp != 0){
        int d = temp % 10;
        countD++;
        temp = temp/10;
    }
    int sum = 0;
    while(a !=0 ){
        int d = a % 10;
        sum += pow(d, countD);
        a = a/10;
    }
    return sum;
}

int main(){
    // int n = 5;
    // cin>>n;
    // vector<int> E = {7,0,5,1,3};
    // vector<int> L = {1,2,1,3,4};

    // vector<int> E = {3, 0, 0, 2};
    // vector<int> L = {1, 5, 1, 0};

    // int maxSoFar = INT_MIN;
    // int curr = 0;
    // for(int i=0; i<n; i++){
    //     curr += E[i] - L[i];
    //     curr = max(curr, 0);
    //     maxSoFar = max(maxSoFar, curr);
    // }
    // cout<<maxSoFar<<endl;
    // string s = "racecar";
    // if(palindrome){
    //     cout<<"true"<<endl;
    // }else{
    //     cout<<"false"<<endl;
    // }

    int a = 1634;
    cout<<armStrong(a)<<endl;
    return 0;
}

