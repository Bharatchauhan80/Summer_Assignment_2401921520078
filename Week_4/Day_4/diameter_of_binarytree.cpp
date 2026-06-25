class Solution {
private:
    int maxDiameter = 0;
    
    int calculateHeight(TreeNode* node) {
        if (!node) return 0;
        
        int leftHeight = calculateHeight(node->left);
        int rightHeight = calculateHeight(node->right);
        
        maxDiameter = max(maxDiameter, leftHeight + rightHeight);
        
        return max(leftHeight, rightHeight) + 1;
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        calculateHeight(root);
        return maxDiameter;
    }
};