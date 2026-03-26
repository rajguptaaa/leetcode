#include<iostream>
#include<vector> 
using namespace std;

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

TreeNode* constructBST(TreeNode* root, int val){
    if(!root) return new TreeNode(val);
    TreeNode* curr = root;
    while(true){
        if(val < curr->val){
            if(!curr->left){
                curr->left = new TreeNode(val);
                break;
            }
            else curr = curr->left;
        }else{ //val > curr->val
            if(!curr->right){
                curr->right = new TreeNode(val);
                break;
            }
            else curr = curr->right;
        }
    }
    return root;
}

TreeNode *insert(TreeNode* root, int key){
    if (!root) return new TreeNode(key);
    if (root->val > key){
        root->left = insert(root->left, key);
    }else root->right = insert(root->right, key);
        
    return root;
}

void inorder(TreeNode* root){
    if(!root) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

//Deletion
/*
1. Leaf Node: easy no childs -> if curr->next = key then curr->next = null
2. node with one child node->val == key return non-null child
3. node with 2 children, use inorder successor, (immediate next ele)
*/

TreeNode* getInorderSuccessor(TreeNode* root){
    while(root != nullptr && root->left != nullptr){
        root = root->left;
    }
    return root;
}

TreeNode* deleteNode(TreeNode* root, int key){
    if(!root) return nullptr;
    if(key < root->val){
        root->left = deleteNode(root->left, key);
    }else if(key > root->val){
        root->right = deleteNode(root->right, key);
    }else{ //key == root->val
        if(root->left == nullptr){
            TreeNode* temp = root->right;
            delete root;
            return temp;
        }else if(root->right == nullptr){
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }else{ // two child
            TreeNode* inorderSuccessor = getInorderSuccessor(root->right);
            root->val = inorderSuccessor->val;
            root->right = deleteNode(root->right, inorderSuccessor->val);
        }
    }
    return root;
}



int main(){
    vector<int> arr = {1,3,4,5,6};

    TreeNode* root = nullptr;

    for(int i=0; i<arr.size(); i++){
        root = constructBST(root, arr[i]);
    }
    insert(root, 2);
    insert(root, 7);

    inorder(root);
    cout<<endl;
    root = deleteNode(root, 1);
    root = deleteNode(root, 7);
    cout<<endl;
    inorder(root);
    

    return 0;
}