#include<iostream>
#include<string>
using namespace std;
bool isvalidPal(string& str){
    string cleaned;
    for(char ch : str){
        if(isalnum(ch)){
            cleaned += tolower(ch);
        }
    }
    int l = 0, r = cleaned.size() - 1;
    while(l < r){
        if(cleaned[l] != cleaned[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}
int main(){
    string str = "A man, a plan, a canal: Panama";
    cout<<isvalidPal(str);
    return 0;
}
