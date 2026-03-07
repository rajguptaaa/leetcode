#include <iostream>
#include <vector>
using namespace std;

void twoWayMerge(vector<int>& arr, int low, int mid, int high) {
    int i = low; 
    int j = mid + 1;
    int k = 0;
    vector<int> res(high - low + 1);

    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) 
            res[k++] = arr[i++];
        else 
            res[k++] = arr[j++];
    }
    while (i <= mid) 
        res[k++] = arr[i++];
    while (j <= high) 
        res[k++] = arr[j++];

    for (int x = low; x <= high; x++) {
        arr[x] = res[x - low];
    }
}

void mergeSort(int low, int high, vector<int>& arr) {
    if (low >= high) return;
    int mid = low + (high - low) / 2;
    mergeSort(low, mid, arr);
    mergeSort(mid + 1, high, arr);
    twoWayMerge(arr, low, mid, high);
}

int main() {
    vector<int> arr1 = {5, 2, 9, 1, 6, 3};
    mergeSort(0, arr1.size() - 1, arr1);

    for (int x : arr1) {
        cout << x << " ";
    }
    return 0;
}
