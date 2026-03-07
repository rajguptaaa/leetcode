#include<iostream>
#include<vector>
using namespace std;
void revArr(vector<int>& arr){
    int n = arr.size();
    int left = 0;
    int right = n - 1;
    while(left < right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

int remDup(vector<int>& nums){
        if(nums.empty()) return 0; 
        int k = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] != nums[i-1]){
                nums[k] = nums[i];
                k++;
            }
        }
        nums.resize(k);
        return k;
}


vector<int> twoSum(vector<int>& arr, int k){
    int l = 0;
    int r = arr.size() - 1;
    int sum = 0;
    while(l < r){
        sum = arr[l] + arr[r];
        if(sum == k) {
            return {l+1, r+1};
        }else if(sum < k){
            l++;
        }else{
            r--;
        }
    }
    return {};
}

int containerWater(vector<int>& arr){
    int n = arr.size();
    int l = 0;
    int r = n - 1;
    int currMax = 0;
    while(l < r){
        int height = min(arr[l], arr[r]);
        int area = height * (r - l);
        currMax = max(currMax, area);

        if(arr[l] < arr[r]){
            l++;
        }else{
            r--;
        }
    }
    return currMax;
}

int trapRainWater(vector<int>& height){
    int n = height.size();
    int left = 0, right = n-1;
    int leftMax = 0, rightMax = 0;
    int waterTrapped = 0;
    while(left <= right){
        if(height[left] <= height[right]){
            if(height[left] >= leftMax){
                leftMax = height[left];
            }else{
                waterTrapped += leftMax - height[left];
            }
            left++;
        }else{
            if(height[right] >= rightMax){
                rightMax = height[right];
            }else{
                waterTrapped += rightMax - height[right];
            }
            right--;
        }
    }
    return waterTrapped;
}

void printArr(vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main(){
    vector<int> arr = {1,2,3,3,4,4,5,5,6};
    // vector<int> arr = {4,2,0,3,2,5};
    // revArr(arr);

    remDup(arr);

    // vector<int> result = twoSum(arr, 14);
    // if(!result.empty()){
    //     cout<<result[0]<<" "<<result[1]<<endl;
    // }else{
    //     cout<<"No Pair Found"<<endl;
    // }

    // cout<<containerWater(arr)<<endl;

    // cout<<trapRainWater(arr)<<endl;

    printArr(arr);
    return 0;
}