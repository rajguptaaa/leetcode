#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;


class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data){
        val = data;
        left = nullptr;
        right = nullptr;
    }
};

void inorder(TreeNode* root){
    if(!root) return;

    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

void preorder(TreeNode* root){
    if(!root) return;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(TreeNode* root){
    if(!root) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
}

int height(TreeNode* root){
    if(!root) return 0;
    return 1 + max(height(root->left), height(root->right));
}

vector<int> res;
vector<int> allLeafNodes(TreeNode* root){
    if(!root) return {};
    if(!root->left && !root->right) res.push_back(root->val);
    allLeafNodes(root->left);
    allLeafNodes(root->right);
    return res;
}

//Level order BFS
vector<vector<int>> levelOrder;
vector<vector<int>> levelOrderBFS(TreeNode* root){
    if(!root) return levelOrder;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        int s = q.size();
        vector<int> level;
        for(int i=0; i<s; i++){
            TreeNode* node = q.front();
            q.pop();
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
            level.push_back(node->val);
        }
        levelOrder.push_back(level);
    }
    return levelOrder;
}


//Balanced BT
int isBal(TreeNode* root){
    if(!root) return 0;
    int leftH = isBal(root->left);
    if(leftH == -1) return -1;
    int rightH = isBal(root->right);
    if(rightH == -1) return -1;

    if(abs(leftH - rightH) > 1) return -1;

    return max(leftH, rightH) + 1;
}
bool balancedBT(TreeNode* root){
    return isBal(root) != -1;
}

//Diameter of BT
int diameterHeight(TreeNode* root, int& maxi){
    if(!root) return 0;
    int leftH = diameterHeight(root->left, maxi);
    int rightH = diameterHeight(root->right, maxi);

    maxi = max(maxi, leftH + rightH);

    return 1 + max(leftH, rightH);
}
int diameterofBt(TreeNode* root){
    if(!root) return 0;
    int diameter = 0;
    diameterHeight(root, diameter);
    return diameter;
}

//maximum path sum
int maximumSum(TreeNode* root, int& maxi){
    if(!root) return 0;
    int leftH = maximumSum(root->left, maxi);
    int rightH = maximumSum(root->right, maxi);

    maxi = max(maxi, leftH+rightH+root->val);

    return root->val + max(leftH, rightH);
}
int maxPathSum(TreeNode* root){
    if(!root) return 0;
    int maxi = 0;
    maximumSum(root, maxi);
    return maxi;
}

//ZigZag Traversal
vector<vector<int>> zigZag(TreeNode* root){
    if(!root) return {};
    vector<vector<int>> zigzagTraversal;
    queue<TreeNode*> q;
    q.push(root);
    bool isLeftToRight = true;
    while(!q.empty()){
        int size = q.size();
        vector<int> level(size);
        for(int i=0; i<size; i++){
            TreeNode* node = q.front();
            q.pop();

            int index = (isLeftToRight) ? i : size - i - 1;
            level[index] = node->val;
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
        isLeftToRight = !isLeftToRight;
        zigzagTraversal.push_back(level);
    }
    return zigzagTraversal;
}

int main(){
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(8);
    root-> right = new TreeNode(12);
    root->left->right = new TreeNode(8);
    root->left->left = new TreeNode(4);
    root->right->right = new TreeNode(1);
    root->right->left = new TreeNode(1);
    root->left->right->left = new TreeNode(9);

    cout<<"inorderr:";
    inorder(root);
    cout<<endl;
    cout<<"preorder: ";
    preorder(root);
    cout<<endl;
    cout<<"postorder: ";
    postorder(root);
    cout<<endl;
    cout<<"height :";
    cout<<height(root);
    cout<<endl;

    cout<<"All Leaf Nodes: ";
    allLeafNodes(root);
    for(int x : res)
        cout << x << " ";
    cout<<endl;

    cout<<"Level Order: "<<endl;
    levelOrderBFS(root);
    for(int i=0; i<levelOrder.size(); i++){
        for(int j=0; j<levelOrder[i].size(); j++){
            cout<<levelOrder[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Balanced Binary Tree: ";
    cout<<balancedBT(root)<<endl;

    cout<<"Diameter of Binary Tree: ";
    cout<<diameterofBt(root)<<endl;

    cout<<"Max path sum: ";
    cout<<maxPathSum(root)<<endl;

    cout<<"ZigZag Order: "<<endl;
    vector<vector<int>> zigzagTraversal = zigZag(root);
    for(int i=0; i<zigzagTraversal.size(); i++){
        for(int j=0; j<zigzagTraversal[i].size(); j++){
            cout<<zigzagTraversal[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}












































