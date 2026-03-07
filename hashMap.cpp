#include<iostream>
#include<hash_map>
#include<hash_set>
#include<vector>
#include<unordered_map>
#include<unordered_set>

using namespace std;

int main(){
    // unordered_map<int,int> mp;
    // mp[1] = 33;
    // mp.insert({2, 18});
    // mp.insert({3, 11});

    // for(auto i : mp){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }

    // unordered_map<int,string> um;
    // um[1] = "Raj";
    // um.insert({2, "Manya"});
    // um.insert({3, "Gupta"});

    // for(auto i : um){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }

    // unordered_map<string,string> um;
    // um["one"] = "Raj";
    // um.insert({"two", "Manya"});
    // um.insert({"three", "Gupta"});

    // for(auto i : um){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }

    unordered_map<string, int> myMap;
    myMap["apple"] = 2;
    myMap["banana"] = 5;
    myMap["orange"] = 3;

    auto it = myMap.find("apple");
    if (it != myMap.end()) {
        cout << "Found: " << it->first << " => " << it->second << endl;
    } else {
        cout << "Key not found!" << endl;
    }

    // unordered_set<int> s = {3, 5, 2, 1};
    // for (auto x : s)
    //     cout << x << " ";

    unordered_set<int> mySet = {10, 20, 30, 40, 50};

    int key = 30;

    auto it = mySet.find(key);
    if (it != mySet.end()) {
        cout << "Found: " << key << endl;
    } else {
        cout << "Key not found!" << endl;
    }

    

    return 0;
}

