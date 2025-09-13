#include <bits/stdc++.h>
using namespace std;

int main() {
        vector<int>nums = {1,2,3};
        int n = nums.size();
        vector<vector<int>>ans;

        for(int i=0;i<(1<<n);i++){
            vector<int>curr_arr = {};
            for(int j=0;j<n;j++){
                if(i & (1<<j)){ // set?
                    curr_arr.push_back(nums[j]);
                }
            }
            ans.push_back(curr_arr);
        }
        
    for(auto &subset : ans) {
        cout << "{ ";
        for(int x : subset) cout << x << " ";
        cout << "}\n";
    }
    return 0;
}