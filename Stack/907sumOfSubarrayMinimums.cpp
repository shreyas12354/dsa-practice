class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        long long ans = 0;
        for(int i=0;i<n;i++){
            int minE = INT_MAX;
            for(int j=i;j<n;j++){
                if(arr[j]<minE){
                    minE = arr[j];
                }
                ans+=minE;
            }
        }
        return ans % 1000000007;
    }
};
// O(n^2)