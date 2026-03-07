#include<iostream>
#include<vector>
#include<queue>
using namespace std;

// bool ratInMaze(vector<vector<int>>& maze){
//     int n = maze.size();
//     int m = maze[0].size();

//     if(maze[0][0] == 1 || maze[n-1][m-1]==1) return false;

//     queue<pair<int,int>> q;
//     q.push({0,0});

//     int x, y;
//     while(!q.empty()){
//         x = q.front().first;
//         y = q.front().second;
//         q.pop();
    
//     if(x==n-1 && y==m-1) return true;

//     if(y+1 < m && maze[x][y+1]==0){
//         q.push({x,y+1});
//     }
//     if(x+1 < n && maze[x+1][y] == 0){
//         q.push({x+1, y});
//     }
// }
//     return false;
// }

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

    if(x-1 > 0 && board[x-1][y]==1){
        solveBoard(board, x-1, y, n, path + 'L', ans);
    }
    if(y-1 > 0 && board[x][y-1] == 1){
        solveBoard(board, x, y-1, n, path + 'U', ans);
    }

    board[x][y] = 1;
}


// int main(){
    // if(ratInMaze(arr)){
    //     cout<<"True";
    // }else{
    //     cout<<"False";
    // }
// }

int main(){
    vector<vector<int>> arr= {
        {1,0,1},
        {1,1,0},
        {0,1,1}
    };

    int n = arr.size();
    vector<string> ans;
    if(arr[0][0]==1){
        solveBoard(arr, 0, 0, n, "", ans);
    }
    for(string p : ans){
        cout<<p<<" ";
    }

    return 0;
}

// int main(){
//     int rows, cols;
//     cin>>rows;
//     cin>>cols;
//     vector<vector<int>> arr(rows, vector<int>(cols));
//     //input
//     for(int i=0; i<rows; i++){
//         for(int j=0; j<cols; j++){
//             cin>>arr[i][j];
//         }
//     }
//     //optput
//     for(int i=0; i<rows; i++){
//         for(int j=0; j<cols; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     //static way
//     vector<vector<int>> arr2 = {
//         {1,2,3,4},
//         {5,6,7,8},
//         {1,2,3,4}
//     };

//     for(int i=0; i<arr2.size(); i++){
//         for(int j=0; j<arr2[i].size(); j++){
//             cout<<arr2[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }
