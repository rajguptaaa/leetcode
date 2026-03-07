#include <iostream>
#include <string>

using namespace std;

string revStr(string str){
    string newStr = "";
    for (int i = str.length() - 1; i >= 0; i--){
        newStr += str[i];
    }
    return newStr;
}

bool isPal(string str1){
    int s = 0;
    int e = str1.length() - 1;
    for (int i = 0; i < str1.length(); i++){
        str1[i] = tolower(str1[i]);
    }
    while (s <= e){
        if (str1[s] != str1[e])
            return false;
        s++;
        e--;
    }
    return true;
}

int main(){
    string str = "RACEcar";
    cout << revStr(str) << endl;
    cout << isPal(str) << endl;
    return 0;
}