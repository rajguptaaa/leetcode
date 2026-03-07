#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
using namespace std;

//using Array
/*
vector<int> nxtGreater(vector<int>& arr){
    int n = arr.size();
    vector<int> res(n, -1);
    for(int i=0; i<n-1; i++){
        for(int j=i+1; i<n; i++){
            if(arr[i] < arr[j]){
                res[i] = arr[j];
            }
            break;
        }
    }
    return res;
}
*/

//using stack
/*
vector<int> nxtGreater(vector<int>& arr){
    int n = arr.size();
    vector<int> res(n);
    stack<int> s;
    for(int i=n-1; i>=0; i--){
        while(s.size() > 0 && s.top () <= arr[i]){ //top ke agar nextgreater nhi hai to pop kar do
            s.pop();
        }
        if(s.empty()){
            res[i] = -1;
        }
        else{ //top pe next greater hai
        res[i] = s.top();
        }
        s.push(arr[i]);
    }

    return res;
}
*/

//unordered_map (leetcode version)
vector<int> nxtGreater(vector<int>& arr1, vector<int>& arr2){
    int n = arr2.size();
    unordered_map<int, int> m;
    stack<int> s;
    //arr2 ke liye saare next greater nikal lete hai pehle and usko map mai store kar lete hai
    for(int i=n-1; i>=0; i--){
        while(s.size() > 0 && s.top() <= arr2[i]){
            s.pop();
        }
        if(s.empty()){
            m[arr2[i]] = -1;
        }else{
            m[arr2[i]] = s.top();
        }
        s.push(arr2[i]);
    }
    vector<int> res;
    for(int i=0; i<arr1.size(); i++){
        res.push_back(m[arr1[i]]); //arr1[i] = 4 so map[4] = uska next greater = 5, soo push 5 in index 0
    }
    return res;
}

int main(){
    /*
    vector<int> arr = {6,8,0,1,3};
    vector<int> ans = nxtGreater(arr);
    for(int x : ans){
        cout<< x <<" ";
    }
    cout<<endl;
    */
    vector<int> arr1 = {4,1,2};
    vector<int> arr2 = {4,3,1,2,5};
    vector<int> ans = nxtGreater(arr1, arr2);
    for(int x : ans){
        cout<< x <<" ";
    }
    cout<<endl;

    return 0;
}