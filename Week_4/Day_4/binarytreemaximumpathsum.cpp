class Solution {
private:
    int maxPath = INT_MIN;
    
    int findMaxPathSum(TreeNode* node) {
        if (!node) return 0;
        
        int leftGain = max(findMaxPathSum(node->left), 0);
        int rightGain = max(findMaxPathSum(node->right), 0);
        
        int currentPathSum = node->val + leftGain + rightGain;
        maxPath = max(maxPath, currentPathSum);
        
        return node->val + max(leftGain, rightGain);
    }

public:
    int maxPathSum(TreeNode* root) {
        findMaxPathSum(root);
        return maxPath;
    }
};