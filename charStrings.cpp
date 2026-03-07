#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

class Solution{
private:
    string sortString(string str){
        sort(str.begin(), str.end());
        return str;
    }
public:
    string pvtToPublic(string str){
        return sortString(str);
    }
    void printArr(vector<string>& strArr){
        int n = strArr.size();
        cout<<"[";
        for(int i = 0; i < n; i++){
            cout<<'"'<< strArr[i] <<'"';
            if(i != n - 1) cout << ", ";
        }
        cout<<"]"<<endl;
    }
    bool palindrome(string str){
        int l=0, r = str.length() -1 ;
        while(l <= r){
            if(str[l] != str[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    bool anagram(string a, string b){
        if(a.length() != b.length()) return false;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        return a == b;
    }
};

int main(){
    // string str;
    // getline(cin, str);

    // cout<<str<<endl;
    Solution obj; //object of class
//  cout<<obj.sortString(str)<<endl; // cannot acces, its a private function
    // cout<<obj.pvtToPublic(str)<<endl;

    // vector<string> strArr(5);
    // for(int i=0; i<strArr.size(); i++){
    //     cin>>strArr[i];
    // }

    // obj.printArr(strArr);

    string s = "racecar";
    cout<<obj.palindrome(s)<<endl;

    string a = "silent";
    string b = "listen";

    // cout<<obj.anagram(a, b)<<endl; //OP: returns  1 or 0
    if(obj.anagram(a, b)){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }

    return 0;
}
