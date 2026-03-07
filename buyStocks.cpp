#include<iostream>
#include<vector>
using namespace std;

int buyStocks1(vector<int>& arr){
    int n = arr.size();
    int min_price = arr[0];
    int maxi = 0;
    for(int i=0; i<n; i++){
        min_price = min(min_price, arr[i]);
        int profit = arr[i] - min_price;
        maxi = max(maxi, profit);
    }
    return maxi;
}


int buyStocks2(vector<int>& arr){
    int n = arr.size();
    int profit = 0;
    for(int i=1; i<n; i++){
        if(arr[i] > arr[i - 1]){
            profit += arr[i] - arr[i - 1];
        }
    }
    return profit;
}

int main(){
    vector<int> prices = {7,1,5,3,6,4};
    cout<<buyStocks1(prices);
    cout<<endl;
    cout<<buyStocks2(prices);
}