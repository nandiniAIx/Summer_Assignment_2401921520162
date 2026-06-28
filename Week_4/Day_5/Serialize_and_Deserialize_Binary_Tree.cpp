class Codec {
public:

    // Serialize
    void save(TreeNode* root, string &s) {

        if (root == NULL) {
            s += "#,";
            return;
        }

        s += to_string(root->val) + ",";

        save(root->left, s);
        save(root->right, s);
    }

    string serialize(TreeNode* root) {

        string s = "";
        save(root, s);
        return s;
    }

    // Deserialize
    TreeNode* build(string &data, int &i) {

        if (data[i] == '#') {
            i += 2;
            return NULL;
        }

        string num = "";

        while (data[i] != ',') {
            num += data[i];
            i++;
        }

        i++;

        TreeNode* root = new TreeNode(stoi(num));

        root->left = build(data, i);
        root->right = build(data, i);

        return root;
    }

    TreeNode* deserialize(string data) {

        int i = 0;
        return build(data, i);
    }
};