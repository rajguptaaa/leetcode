#include <iostream>
#include <vector>
using namespace std;

/**
class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data){
        val = data;
        left = right = nullptr;
    }
};

int main(){
    TreeNode* root = new TreeNode(30);
    root->left = new TreeNode(15);
    root->right = new TreeNode(35);

    if(!root) cout<<"Null"<<endl;
    else{
        cout<<root->val<<endl; //30
    }
    if(root->left){
        cout<<root->left->val; //15
    }
    return 0;
}
*/

/***
A Binary Search Tree (BST) is a node-based, non-linear hierarchical data structure
where each node has at most two children. It is characterized by an ordering property
that facilitates efficient searching, insertion, and deletion of data.

Left Subtree: Contains only nodes with values less than the parent node's value.
Right Subtree: Contains only nodes with values greater than the parent node's value.
Recursive Nature: Every left and right subtree must also be a valid Binary Search Tree.
Unique Keys: Standard BSTs typically do not allow duplicate nodes
*/

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int data)
    {
        val = data;
        left = right = nullptr;
    }
};

class Solutions
{
public:
    Node *insert(Node *root, int key)
    {
        if (!root)
        {
            return new Node(key);
        }
        if (root->val > key)
        {
            root->left = insert(root->left, key);
        }
        else
        {
            root->right = insert(root->right, key);
        }
        return root;
    }

    void inorder(Node* root)
    {
        if (!root)return;
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }
    
    void preorder(Node* root)
    {
        if (!root) return;
        cout << root->val << " ";
        preorder(root->left);
        preorder(root->right);
    }

    void postorder(Node* root){
        if(!root) return;
        postorder(root->left);
        postorder(root->right);
        cout<<root->val<<" ";
    }
};

int main()
{
    Solutions* obj = new Solutions();
    vector<int> arr = {3,15,4,6,7,8};

    Node* root = nullptr;

    for (int x : arr)
    {
        root = obj->insert(root, x);
    }

    obj->inorder(root);
    cout<<endl;
    obj->preorder(root);
    cout<<endl;
    obj->postorder(root);

    return 0;
}