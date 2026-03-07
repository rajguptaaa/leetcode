#include <iostream>
#include <vector>
using namespace std;

bool isPossible(int row, int col, vector<vector<int>>& board, int n) {
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 1)
            return false;
    } 
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1)
            return false;
    }

    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == 1)
            return false;
    }
    return true;
}

void printArr(vector<vector<int>>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl;
}

void func(int row, int n, vector<vector<int>>& board) {
    if (row == n) {
        printArr(board);
        return;
    }

    for (int col = 0; col < n; col++) {
        if (isPossible(row, col, board, n)) {
            board[row][col] = 1;
            func(row + 1, n, board);
            board[row][col] = 0;
        }
    }
}

int main() {
    vector<vector<int>> board = {
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0}
    };
    func(0, board.size(), board);
    return 0;
}
