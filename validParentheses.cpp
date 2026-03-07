#include<iostream>
#include<stack>
#include<vector>
using namespace std;
bool isValid(string str){
    stack<char> st;
    int n = str.length();
    for(int i=0; i<n; i++){ //opening bracket
        if(str[i] == '(' || str[i] == '[' || str[i] == '{'){
            st.push(str[i]);
        }else{ //closing
            if(st.size() == 0){ return false;}
            if((st.top() == '(' && str[i] == ')') || (st.top() == '{' && str[i] == '}') || (st.top() == '[' && str[i] == ']')){
                st.pop();
            }else{
                return false;
            }
        }
    }
    return st.size() == 0;
}


int main(){
    string str = "({[()]})";
    string str2 = "({()())}";
    cout<<isValid(str)<<endl;
    cout<<isValid(str2);
    return 0;
}
