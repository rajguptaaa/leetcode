#include<iostream>
#include<vector>
using namespace std;

bool bSearch(vector<int>& nums, int t){
    int n = nums.size();
    int l = 0;
    int r = n-1;
    while(l <= r){
        int mid = l + (r - l)/2;
        if(nums[mid] == t){
            return true;
        }if(nums[mid] > t){
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    return false;
}

bool bSearchRec(vector<int>& nums, int t, int l, int r){
    if(l > r) return false;
    int mid = l + ( r - l) / 2;
    if(nums[mid] == t) return true;
    else if (nums[mid] > t) return bSearchRec(nums, t, l, mid-1);
    else return bSearchRec(nums, t, mid+1, r);

    return false;
}

//find the closest largest nummber in a sorted array
int cL(vector<int>& nums, int k){
    int low = 0;
    int high = nums.size()-1;
    while(low < high){
        int mid = low + (high - low) / 2;
        if(nums[mid] == k) return mid;
        else if(nums[mid] > k) high = mid -1;
        else low = mid + 1;
    }
    return low;
}

//find the closest smaller nummber in a sorted array
int cS(vector<int>& nums, int k){
    int low = 0;
    int high = nums.size()-1;
    while(low < high){
        int mid = low + (high - low) / 2;
        if(nums[mid] == k) return mid;
        else if(nums[mid] > k) high = mid -1;
        else low = mid + 1;
    }
    return high;
}


int main(){
    vector<int> arr = {1,2,4,7,8,12,13,14,17,19,33};
    int n = arr.size();
    cout<<bSearch(arr, 19)<<endl;
    cout<<bSearchRec(arr, 1, 0, n-1)<<endl;
    cout<<cL(arr, 99)<<endl;
    cout<<cS(arr, 99)<<endl;
    return 0;
}