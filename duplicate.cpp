#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int findDuplicate(const vector<int>& nums) {
    unordered_set<int> seen;
    for (int num : nums) {
        if (seen.count(num))
            return num;
        seen.insert(num);
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> nums(n + 1);
    for (int i = 0; i <= n; ++i)
        cin >> nums[i];

    cout << "Duplicate element: " << findDuplicate(nums) << endl;
    return 0;
}
