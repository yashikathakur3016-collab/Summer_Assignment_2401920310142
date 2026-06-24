class Solution {
public:
    bool validate(TreeNode* root, TreeNode* minNode, TreeNode* maxNode) {
        if (root == NULL) return true;
        if (minNode != NULL && root->val <= minNode->val) return false;
        if (maxNode != NULL && root->val >= maxNode->val) return false;
        return validate(root->left, minNode, root) && 
               validate(root->right, root, maxNode);
    }
    bool isValidBST(TreeNode* root) {
        return validate(root, NULL, NULL);
    }
};
