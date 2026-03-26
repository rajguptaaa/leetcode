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

TreeNode* helper(vector<int>& arr, int start, int end){
    if(start > end) return nullptr;
    int mid = start + (end - start) /2;
    TreeNode* root = new TreeNode(arr[mid]);
    root->left = helper(arr, start, mid - 1);
    root->right = helper(arr, mid + 1, end);

    return root;
}
TreeNode* constructBalancedBST(vector<int>& arr){
    return helper(arr, 0, arr.size() - 1);
}

void inorder(TreeNode* root){
    if(!root) return;
    inorder(root->left);
    cout<<root->val<<" ";;
    inorder(root->right);
}

int main(){
    vector<int> arr = {-10, -3, 0, 5, 9};
    
    TreeNode* root = constructBalancedBST(arr);
    inorder(root);

    return 0;
}