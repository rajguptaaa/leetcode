#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr ={1,2,3,4,5,5,6,7,8,9};

    unordered_map<int, int> freq;
    for(int n : arr){
        cout<<n<<" ";
    }
    for(int n : arr){
        freq[n]++;
    }
    cout<<endl;
    for(int n : arr){
        cout<<n<<":"<<freq[n]<<endl;
    }

    // set<int> seen;
    // vector<int> res;
    // for(int n : arr){
    //     if(seen.find(n) == seen.end()){
    //         res.push_back(n);
    //         seen.insert(n);
    //     }
    // }
    // for(int i : res){
    //     cout<<i<<endl;
    // }
    // return 0;
}

