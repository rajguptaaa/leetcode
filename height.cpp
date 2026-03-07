#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> name = {"K", "S", "M", "R"};
    vector<float> height = {6.2, 5.3, 5.1, 5.2};

    int n = height.size();

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (height[i] > height[j]) {
                swap(height[i], height[j]);
                swap(name[i], name[j]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << name[i]<<" ";
    }

    return 0;
}
    