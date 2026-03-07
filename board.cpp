#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void solveBoard(vector<vector<int>>& board, int x, int y, int n, string path, vector<string>& ans){
    if(x== n-1 && y== n-1){
        ans.push_back(path);
        return;
    }
    board[x][y] = 0;

    if(x+1 < n && board[x+1][y]==1){
        solveBoard(board, x+1, y, n, path + 'D', ans);
    }
    if(y+1 < n && board[x][y+1] == 1){
        solveBoard(board, x, y+1, n, path + 'R', ans);
    }

    if(x-1 >= 0 && board[x-1][y]==1){
        solveBoard(board, x-1, y, n, path + 'L', ans);
    }
    if(y-1 >= 0 && board[x][y-1] == 1){
        solveBoard(board, x, y-1, n, path + 'U', ans);
    }

    board[x][y] = 1;
}


int main(){
    vector<vector<int>> arr= {
    {1, 0, 0, 1},
    {1, 1, 1, 1},
    {1, 0, 1, 0},
    {1, 0, 1, 1}
};

    int n = arr.size();
    vector<string> ans;
    if(arr[0][0]==1){
        solveBoard(arr, 0, 0, n, "", ans);
    } else{
        cout<<"Not Possible"<<endl;
    }
    for(string p : ans){
        cout<<p<<" ";
    }

    return 0;
}