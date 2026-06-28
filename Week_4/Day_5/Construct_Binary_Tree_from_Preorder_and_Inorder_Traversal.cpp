class Solution {
public:
    
    int index = 0;

    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int start, int end) {

        if (start > end) {
            return NULL;
        }

        TreeNode* root = new TreeNode(preorder[index]);
        index++;

        int pos = start;
        while (inorder[pos] != root->val) {
            pos++;
        }

        root->left = build(preorder, inorder, start, pos - 1);

        root->right = build(preorder, inorder, pos + 1, end);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        return build(preorder, inorder, 0, inorder.size() - 1);
    }
};