#include<iostream>
#include<queue>
using namespace std;

// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val){
//         data = val;
//         left = nullptr;
//         right = nullptr;
//     }
// };

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
void preOrder(Node* root){
    if(!root){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);

}

void postOrder(Node* root){
    if(!root){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

void inOrder(Node* root){
    if(!root){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
    
}

void levelOrder(Node* root){ //BFS
    if(!root){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* curr = q.front();
        q.pop();
        cout << curr->data <<" ";
        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);
    }
}

int numberOfNodes(Node* root){
    if(!root) return 0;
    return 1 + numberOfNodes(root->left) + numberOfNodes(root->right);
}

int findMax(Node* root) {
    if (root == nullptr) return INT_MIN;

    int leftMax = findMax(root->left);
    int rightMax = findMax(root->right);

    return max(root->data, max(leftMax, rightMax));
}

int height(Node* root){
    if(!root) return 0;
        return 1 + max(height(root->left), height(root->right));
}

bool isSameTree(Node* p, Node* q) {
    if (!p && !q) return true;           // dono null hai
    if (!p || !q) return false;          // koi ek null hai
    if (p->data != q->data) return false;  // values are not same
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);     
    root->left->right = new Node(5);
    root->right->right = new Node(7);

    preOrder(root);
    cout << endl;
    postOrder(root);
    cout << endl;
    inOrder(root);
    cout << endl;
    levelOrder(root);
    cout << endl;
    cout << numberOfNodes(root) << endl;
    cout<<findMax(root)<<endl;
    cout<<height(root)<<endl;
//{
    Node* p = new Node(1);
    p->left = new Node(2);
    p->right = new Node(3);

    Node* q = new Node(1);
    q->left = new Node(3);
    q->right = new Node(2);
    cout<<isSameTree(p, q)<<endl;
//}
    return 0;
}

//print all subsets of a array {1,2,3,4,5}.