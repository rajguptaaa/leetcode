#include<iostream>
#include<vector>
#include<string>
#include<cctype>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
using namespace std;


/*
Question 1 : Next Smaller Number
The function accepts an integer array 'a' of size m. Replace each number of array with nearest smaller number on its right in the array.
Assumption : All integers are > 0
Note:

Return null if array is null
Replace number with '-1' , if no number is present on its right
*/
vector<int> nxtSmallestNum(vector<int>& arr){
    int n = arr.size();
    vector<int> res(n, -1);

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                res[i]=arr[j];
                break;
            }
        }
    }
    return res;
}

/*
QUESTION 2 : String casing
Given a string you are requested to determine whether it should be converted to all uppercase or all lowercase, depending on the count of uppercase and lowercase letters in the string.
Example 1:
Input : AbCdEfG
Output : ABCDEFG
*/
string convertString(string str1){
    int upperCount = 0, lowerCount = 0;
    for(char c : str1){
        if(isupper(c)) upperCount++;
        else lowerCount++;
    }

    for(char& c : str1){
        if(upperCount > lowerCount) c = toupper(c);
        else c = tolower(c);
    }

    return str1;
}

/*3. Find the first non-repeating character in a string*/
char nonRepChar(string str){
    unordered_map<char,int> freq;
    for(char c : str){
        freq[c]++;
    }
    // for(auto it : freq){
    //     if(it.second == 1){
    //         return it.first;                   //does't gurantee the order of iteration 
    //         break;
    //     }
    // }
    for (char c : str) {
        if (freq[c] == 1) {
            return c;
        }
    }
    return 'n';
}

/*4. Count frequency of each character in a string*/
string charFreq(string str){
    unordered_map<char, int> freq;
    for(char c : str){
        freq[c]++;
    }
    for(char c : str){
        cout<<c<<" : "<<freq[c]<<endl;
    }
    return 0;
}


/*5. Remove duplicate characters from a string*/
string remDuplicate(string str){
    unordered_map<char, int> freq;
    int n = str.length();
    string ans = "";
    for (int i = 0; i < n; i++) {
        if (freq.find(str[i]) == freq.end()) {
            ans.push_back(str[i]);
            freq[str[i]]++;
        }
    }
    return ans;
}

/*6. Check if two strings are anagrams*/
bool anagrams(string s1, string s2){
    if(s1.length() != s2.length()) return false;
    
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    return s1 == s2;
}

/*7. Second Largest number in an array*/
int secLargest(vector<int>& arr){
    int n = arr.size();
    int f_Largest = INT_MIN;
    int s_Largest = INT_MIN;
    for(int num : arr){
        if(num > f_Largest){
            s_Largest = f_Largest;
            f_Largest = num;

        }else if(num > s_Largest && num != f_Largest){
            s_Largest = num;
        }
    }
    return s_Largest;
}

/*8. Remove duplicates from an array*/
vector<int> remDup(vector<int>& arr) {
    unordered_set<int> seen;
    vector<int> res;

    for (int x : arr) {
        if (seen.find(x) == seen.end()) {
            res.push_back(x);
            seen.insert(x);
        }
    }
    return res;
}

/*9. Count vowels and consonants in a string*/
int countVC(string str){
    int v_count = 0;
    int c_count = 0;
    for(char c : str){
        if(c == 'a' || c == 'e' ||c == 'i' ||c == 'o' ||c == 'u' ||c == 'A' ||c == 'E' ||c == 'I' ||c == 'O' ||c == 'U') v_count++;
        else if(c==' ') continue;
        else c_count++;
    }
    cout<<v_count<<" "<<c_count;
    return 0;
}

/*10. Move all zeros to the end of the array*/
// sab ko move kar do phele ignoring zeros, then jitne space khali bache sab mai zero dal do

/*11. Perfect square check (without sqrt)*/
string perfectSq(int n){
    int i = 1;
    string str = "Not a Perfect square";
    while(i*i <= n){
        if(i*i == n){
            str = "Perfect Square";
        }
        i++;
    }
    return str;
}



int main(){
    // vector<int> arr = {7,2,6,8,9,2};
    // vector<int> res = nxtSmallestNum(arr);
    // for(int i: res){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // string str = "AbCdEfG";
    // cout<<convertString(str)<<endl;

    // string str2 = "aabbcddef";
    // cout<<nonRepChar(str2)<<endl;
    // charFreq(str2);
    // cout<<remDuplicate(str2)<<endl;  
    
    // string s1 = "silent";
    // string s2 = "listen";
    // if(anagrams(s1, s2)){
    //     cout<<"True";
    // }else{
    //     cout<<"False";
    // }

    // vector<int> arr = {1,2,12,43,23,45,67,87};
    // cout<<secLargest(arr)<<endl;

    // vector<int> arr2 = {1,2,3,5,5,5,5};
    // vector<int> res = remDup(arr2);
    // for(int n : res){
    //     cout<<n<<" ";
    // }

    // countVC("Hello World");
    cout<<perfectSq(16);
    return 0;
}



