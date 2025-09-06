class Solution {
public:
    bool isMirror(TreeNode* left, TreeNode* right){
        if(!left && !right) return true;
        else if(!left || !right) return false;
        return (left->val == right->val && (isMirror(left->right, right->left) && isMirror(left->left, right->right)));
    }

    bool isSymmetric(TreeNode* root) {
        return isMirror(root->left, root->right);
    }
};