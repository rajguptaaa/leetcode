#include <iostream>
#include <algorithm>
#include<vector>
#include<unordered_map>

using namespace std;

vector<vector<string>> groupAnagram(vector<string> str){
    int n = str.size();
    vector<vector<string>> ans;
    unordered_map<string, vector<string>> mp;

    for(int i = 0; i<n; i++){
        string s = str[i];
        sort(s.begin(), s.end());
        mp[s].push_back(str[i]);
    }
    for(auto it : mp){
        ans.push_back(it.second);
    }
    return ans;
}

int main() {
    vector<string> str = {"cat", "tca", "act", "dog", "god"};
    vector<vector<string>> res = groupAnagram(str);

    for (int i = 0; i < res.size(); i++) {
    cout<<"[";
    for (int j = 0; j < res[i].size(); j++) {
        cout << res[i][j]<<" ";
    }
    cout<<"]";
    cout<<",";
}
    
    return 0;
}
