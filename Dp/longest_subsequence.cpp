// // O(n^2)=tc & O(n)=space

// class Solution {
//   public:
//     int longestSubseq(vector<int> &arr) {
//         // code here
//         int n = arr.size();
//         vector<int>dp(n,1);
//         int ans=1;
//         for(int i=1;i<n;i++){
//             for(int j=0;j<i;j++){
//                 if(abs(arr[i]-arr[j]) == 1){
//                     dp[i] = max(dp[j],dp[j]+1); 
//                 }
//             }
//             ans = max(ans, dp[i]);
//         }
//         return ans;
//     }
// };

// O(n) TC O(n) sc
class Solution {
  public:
    int longestSubseq(vector<int> &arr) {
        // code here
        int ans = 1;
        unordered_map<int,int>dp;
        for(int x: arr){
            int left = dp.count(x-1)? dp[x-1]: 0;
            int right = dp.count(x+1)? dp[x+1] : 0;
            dp[x] = max(dp[x], 1+max(left,right));
            ans = max(ans, dp[x]);
        }
        return ans;
    }
};