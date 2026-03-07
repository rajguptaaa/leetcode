#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

/*
int majEle(int n, vector<int>& arr){
    unordered_map<int, int> freq;
    for(int i : arr){
        freq[i]++;
        if(freq[i] >= n/2){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {3,1,2,3,2,3,2,3,2,3};
    int n = arr.size();
    cout<<majEle(n, arr);
}
*/

/*
int majEle(vector<int>& arr){
    int count = 0;
    int ele = 0;
    for(int i : arr){
        if(count == 0){
            ele = i;
        }
        if(i == ele){
            count++;
        }
        else{
            count--;
        }
    }
    return ele;
}
*/

vector<int> majEle2(vector<int>& arr){
    int n = arr.size();
    int num1 = -1, num2 = -1;
    int count1 = 0, count2 = 0;
    for(int i : arr){
        if(i == num1){
            count1++;
        }else if(i == num2){
            count2++;
        }else if(count1 == 0){
            num1 = i;
            count1++;
        }else if(count2 == 0){
            num2 = i;
            count2++;
        }else{
            count1--;
            count2--;
        }
    }
    count1 = 0;
    count2 = 0;
    for(int i : arr){
        if(i==num1) count1++;
        if(i==num2) count2++;
    }

    vector<int> ans;
    if(count1 > n/3){
        ans.push_back(num1);
    }
    if(count2 > n/3){
        ans.push_back(num2);
    }

    return ans;
}

int main(){
    vector<int> arr = {3,2,2,3,2,3,2,3,2,1,3};
    vector<int> res = majEle2(arr);
    for(int i : res){
        cout<<i<<" ";
    }
}