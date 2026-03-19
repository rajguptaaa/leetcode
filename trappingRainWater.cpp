#include<iostream>
#include<vector>

using namespace std;

class Solution{
public:
    int trappingRainWater(vector<int>& bars){
        int n = bars.size();
        vector<int> leftMax(n);
        vector<int> rightMax(n);

        //left max
        leftMax[0] = bars[0];
        for(int i=0; i<n; i++){
            leftMax[i] = max(bars[i], leftMax[i-1]);
        }

        //rigth Max
        rightMax[n-1] = bars[n-1];
        for(int i=n-2; i>=0; i--){
            rightMax[i] = max(bars[i], rightMax[i+1]);
        }

        int ans = 0;
        for(int i=0; i<n; i++){
            ans += min(leftMax[i], rightMax[i]) - bars[i];
        }
        return ans;
    }
    
    int twoPointersApproach(vector<int>& heights){
        int n = heights.size();
        int l = 0, r = n-1;
        int lMax = 0, rMax = 0;
        int ans = 0;
        while(l <= r){
            lMax = max(lMax, heights[l]);
            rMax = max(rMax, heights[r]);

            if(lMax < rMax){
                ans += (lMax - heights[l]);
                l++;
            }else{
                ans += (rMax - heights[r]);
                r--;
            }
        }
        return ans;
    }
};
int main(){
    Solution* obj = new Solution();
    vector<int> arr = {4,2,0,3,2,5};
    cout<<obj->trappingRainWater(arr)<<endl;
    cout<<obj->twoPointersApproach(arr)<<endl;
    
    return 0;
}