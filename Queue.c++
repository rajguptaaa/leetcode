#include<iostream>
#include<queue>
#include<deque>
#include<vector>

using namespace std;


/*
Queue: First in First Out O(1)
push (rear) enqueue
pop (front) dequeue
front

    queue<int> q;
    q.push(50);
    q.push(60);
    q.push(70);
    q.pop();
    cout<<q.front()<<endl;

    deque<int> dq;
    dq.push_back(10);
    dq.push_front(20);
    dq.pop_back();
    cout<<dq.front()<<endl; //20
*/

//Impliment Stack using Queue
class Queue{
public:
    queue<int> q1;
    queue<int> q2;
    
    Queue(){}

    void push(int x){
        if(q1.size() == 0) q1.push(x);
        else{
            while(!q1.empty()){
                q2.push(q1.front());
                q1.pop();
            }

            q1.push(x);

            while(!q2.empty()){
                q1.push(q2.front());
                q2.pop();
            }
        }
    }
    int pop(){
        int ans = q1.front();
        q1.pop();

        return ans;
    }
    int top(){
        return q1.front();
    }
    bool empty(){
        return q1.size() == 0;
    }

};

int main(){
    
    return 0;
}