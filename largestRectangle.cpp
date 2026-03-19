#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Solution{
public:
    int largestRectangleArea(vector<int>& heights){
        int n = heights.size();
        vector<int> leftMin(n);
        vector<int> rightMin(n);
        stack<int> st;
        
        //left min
        for(int i=0; i<n; i++){
            while(st.size() > 0 && heights[st.top()] >= heights[i]){
                st.pop();
            }
            leftMin[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        //emoty the stack
        while(!st.empty()){
            st.pop();
        }

        //right min
        for(int i=n-1; i>=0; i--){
            while(st.size() > 0 && heights[st.top()] >= heights[i]){
                st.pop();
            }
            rightMin[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        //calculate max area;
        int ans = 0;
        for(int i=0; i<n; i++){
            int width = rightMin[i] - leftMin[i] - 1;
            int area = heights[i] * width;
            ans = max(ans, area);
        }
        return ans;
    }
};

int main(){
    vector<int> nums = {2,1,5,6,2,3};
    Solution* obj = new Solution();
    cout<<obj->largestRectangleArea(nums);
    return 0;
}