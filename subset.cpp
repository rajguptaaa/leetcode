#include<iostream>
using namespace std;
void subset(string input, string output, int index){
    if(index==input.length()){
        cout<<"\""<<output<<"\""<<endl;
        return;
    }
    subset(input, output, index+1);
    subset(input, output + input[index], index+1);
}
int main(){
    string input = "ab";
    subset(input, "", 0);
    return 0;
}