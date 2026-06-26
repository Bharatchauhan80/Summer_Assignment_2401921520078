class Codec {
private:
    void serializeHelper(TreeNode* root, string& s) {
        if (!root) {
            s += "#,";
            return;
        }
        s += to_string(root->val) + ",";
        serializeHelper(root->left, s);
        serializeHelper(root->right, s);
    }

    TreeNode* deserializeHelper(stringstream& ss) {
        string str;
        getline(ss, str, ',');
        if (str == "#") return nullptr;
        
        TreeNode* root = new TreeNode(stoi(str));
        root->left = deserializeHelper(ss);
        root->right = deserializeHelper(ss);
        return root;
    }

public:
    string serialize(TreeNode* root) {
        string s = "";
        serializeHelper(root, s);
        return s;
    }

    TreeNode* deserialize(string data) {
        stringstream ss(data);
        return deserializeHelper(ss);
    }
};