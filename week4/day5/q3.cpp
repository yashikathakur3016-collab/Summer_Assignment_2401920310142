class Codec {
public:
    string serialize(TreeNode* root) {
        if (!root) return "#";
        return to_string(root->val) + "," + serialize(root->left) + "," + serialize(root->right);
    }

    TreeNode* deserialize(string data) {
        queue<string> q;
        stringstream ss(data);
        string token;
        while (getline(ss, token, ',')) {
            q.push(token);
        }
        return build(q);
    }

private:
    TreeNode* build(queue<string>& q) {
        string val = q.front();
        q.pop();
        
        if (val == "#") return nullptr;
        
        TreeNode* root = new TreeNode(stoi(val));
        root->left = build(q);
        root->right = build(q);
        
        return root;
    }
};
