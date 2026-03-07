#include <iostream>
#include <vector>
// #include <hash_set>
#include<algorithm>
using namespace std;

// int printArr(vector<int> &arr)
// {
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

int printArr(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// int addEle(vector<int> &arr, int k, int ele)
// {
//     int n = arr.size();
//     vector<int> arr2(n + 1);
//     for (int i = 0; i < k; i++)
//     {
//         arr2[i] = arr[i];
//     }
//     arr2[k] = ele;
//     for (int i = k + 1; i < arr2.size(); i++)
//     {
//         arr2[i] = arr[i - 1];
//     }
//     return printArr(arr2);
// }

// int maxEle(vector<int> &arr)
// {
//     int n = arr.size();
//     int maxi = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         maxi = max(maxi, arr[i]);
//     }
//     return maxi;
// }

// int minEle(vector<int> &arr)
// {
//     int n = arr.size();
//     int mini = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         mini = min(mini, arr[i]);
//     }
// //     return mini;
// // }

// int secLargest(vector<int> &arr)
// {
//     int n = arr.size();
//     int maxi = INT_MIN;
//     int secLargest = INT_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > maxi)
//         {
//             secLargest = maxi;
//             maxi = arr[i];
//         }
//         else if (secLargest < arr[i] && arr[i] != maxi)
//         {
//             secLargest = arr[i];
//         }
//     }
//     return secLargest;
// }

// int revArr(vector<int> &arr)
// {
//     int n = arr.size();
//     int l = 0;
//     int h = n - 1;
//     int temp;
//     while (l <= h)
//     {
//         temp = arr[l];
//         arr[l] = arr[h];
//         arr[h] = temp;
//         l++;
//         h--;
//     }
//     return printArr(arr);
// }

// int removeEle(vector<int> &arr)
// {
//     int n = arr.size();
//     vector<int> arr2;
//     for (int i = 0; i < n-1; i++)
//     {
//         if(arr[i + 1] != arr[i])
//         {
//             arr2.push_back(arr[i]);
//         }
//     }
//     return printArr(arr2);
// }

// int removeEle(vector<int> &arr)
// {
//     int k = 1;
//     for (int i = 1; i < arr.size(); i++)
//     {
//         if (arr[i] != arr[i - 1])
//         {
//             arr[k] = arr[i];
//             k++;
//         }
//     }
//     arr.resize(k);
//     return k;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 7, 3, 4, 5, 6, 3, 8};
//     addEle(arr, 2, 100);
//     cout << endl;
//     cout << "Maximum: " << maxEle(arr) << endl;
//     cout << "Minimum: " << minEle(arr) << endl;
//     cout << "Second Largest: " << secLargest(arr) << endl;
//     revArr(arr);
//     return 0;
// }

// int maxOnes(vector<int> &arr)
// {
//     int n = arr.size();
//     int count = 0;
//     int maxLength = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 1)
//         {
//             count++;
//         }
//         else
//         {
//             count = 0;
//         }
//         maxLength = max(maxLength, count);
//     }
//     return maxLength;
// }

int sumK(vector<int> &nums, int target)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int l = 0;
    int h = n - 1;
    while (l < h)
    {
        int sum = nums[l] + nums[h];
        if (sum == target)
        {
            return true;
        }
        else if (sum < target)
        {
            l++;
        }
        else
        {
            h--;
        }
    }
    return false;
}

int main()
{
    // vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 4, 1, 1, 1, 1, 1, 5, 6, 6, 6, 6, 7, 8, 9, 10};
    // int n = removeEle(arr);
    // printArr(arr, n);

    vector<int> arr = {2, 2, 3, 3, 4, 4, 5, 6, 6, 6, 6, 7, 8, 9, 10};
    // cout << maxOnes(arr) << endl;
    cout<<sumK(arr, 12)<<endl;

    return 0;
}