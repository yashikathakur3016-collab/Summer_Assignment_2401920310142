class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> inorderIndex;
        for (int i = 0; i < inorder.size(); i++) {
            inorderIndex[inorder[i]] = i;
        }
        
        int preIdx = 0;
        return build(preorder, preIdx, 0, inorder.size() - 1, inorderIndex);
    }
    
private:
    TreeNode* build(vector<int>& preorder, int& preIdx, int inStart, int inEnd, 
                     unordered_map<int, int>& inorderIndex) {
        if (inStart > inEnd) return nullptr;
        
        int rootVal = preorder[preIdx++];
        TreeNode* root = new TreeNode(rootVal);
        
        int mid = inorderIndex[rootVal];
        
        root->left = build(preorder, preIdx, inStart, mid - 1, inorderIndex);
        root->right = build(preorder, preIdx, mid + 1, inEnd, inorderIndex);
        
        return root;
    }
};
