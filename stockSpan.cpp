#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> stockSpan(vector<int>& arr){
    vector<int> res(arr.size(), 0);
    stack<int> st;
    for(int i=0; i<arr.size(); i++){
        while(st.size() > 0 && arr[st.top()] <= arr[i]){
            st.pop();
        }
        if(st.size() == 0){
            res[i] = i + 1;
        }else{
            res[i] = i - st.top();
        }
        st.push(i);
    }
    return res;
}

int main(){
    vector<int> prices = {100, 80, 60, 70, 60, 75, 85};
    vector<int> ans = stockSpan(prices);
    for(int x : ans){
        cout<< x << " "; 
    }
    cout<<endl;
    return 0;
}