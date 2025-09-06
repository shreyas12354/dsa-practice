// class Solution {
// public:
//     void traversal(TreeNode* root, vector<int>&arr){
//         if(!root) return;
//         arr.push_back(root->val);
//         traversal(root->left, arr);
//         traversal(root->right, arr);
//     }
//     int minDiffInBST(TreeNode* root) {
//         vector<int>arr;
//         traversal(root, arr);
//         int ans = INT_MAX;
//         for(int i=0;i<arr.size();i++){
//             for(int j=i+1;j<arr.size();j++){
//                 ans = min(abs(arr[i]-arr[j]), ans);
//             }
//         }
//         return ans;
//     }
// };
////O(n^2)

class Solution {
public:
    void inorder(TreeNode* root, vector<int>&arr){
        if(!root) return;
        inorder(root->left, arr);
        arr.push_back(root->val);
        inorder(root->right, arr);
    }
    int minDiffInBST(TreeNode* root) {
        vector<int>arr;
        inorder(root, arr);
        int ans = INT_MAX;
        for(int i=0;i<arr.size()-1;i++){
            ans = min(abs(arr[i]-arr[i+1]), ans);
        }
        return ans;
    }
};
//O(n)