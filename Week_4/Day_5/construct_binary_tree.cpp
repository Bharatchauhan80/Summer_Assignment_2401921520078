class Solution {
private:
    TreeNode* build(vector<int>& preorder, int& preIdx, vector<int>& inorder, int inStart, int inEnd, unordered_map<int, int>& mp) {
        if (inStart > inEnd) return nullptr;
        
        int rootVal = preorder[preIdx++];
        TreeNode* root = new TreeNode(rootVal);
        int inIdx = mp[rootVal];
        
        root->left = build(preorder, preIdx, inorder, inStart, inIdx - 1, mp);
        root->right = build(preorder, preIdx, inorder, inIdx + 1, inEnd, mp);
        
        return root;
    }

public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> mp;
        for (int i = 0; i < inorder.size(); ++i) {
            mp[inorder[i]] = i;
        }
        int preIdx = 0;
        return build(preorder, preIdx, inorder, 0, inorder.size() - 1, mp);
    }
};