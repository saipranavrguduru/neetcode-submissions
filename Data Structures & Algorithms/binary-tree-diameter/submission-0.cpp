class Solution {
public:
    int diameter = 0;

    int diameterOfBinaryTree(TreeNode* root) {
        depth(root);
        return diameter;
    }

    int depth(TreeNode* root) {
        if (root == nullptr) return 0;

        int leftDepth = depth(root->left);
        int rightDepth = depth(root->right);

        diameter = max(diameter, leftDepth + rightDepth);

        return 1 + max(leftDepth, rightDepth);
    }
};