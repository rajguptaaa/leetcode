#include<iostream>
#include<stack>
#include<vector>
#include<list>
using namespace std;

//Implementing stack using vector/array
/*
class Stack{
    vector<int> v;
public:
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
        int n = v.size() - 1;
        return v[n];
    }

    bool empty(){
        if(v.size() == 0){
            return true;
        }
        return false;
    }
};
*/

//Implementing stack using Linkedlist
/*
class Stack{
    list<int> ls;
public:
    void push(int val){
        ls.push_front(val);
    }
    void pop(){
        ls.pop_front();
    }
    int top(){
        return ls.front();
    }

    bool empty(){
        if(ls.size() == 0){
            return true;
        }
        return false;
    }
};
*/




int main(){
    // Stack s; fro vector and linkedlist
    stack<int> s;
    s.push(20);
    s.push(30);
    s.push(40);
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout<<endl;

    return 0;
}


/*
Last in First out - O(1)
stact.push(val) -> insert in top
stack.pop() ->  delete top element
stack.top() -> top most element

Implimentation:
Vector/Array
LinkedList
Stack STL
*/
