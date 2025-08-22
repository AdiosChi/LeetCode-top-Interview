/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*> a;
        queue<TreeNode*> b;
        a.push(p);
        b.push(q);
        TreeNode* ca;
        TreeNode* cb;
        while (!a.empty() && !b.empty()) {
            int size = a.size();

            ca = a.front();
            cb = b.front();
            a.pop();
            b.pop();
            if (!ca && !cb) continue;
            if (!ca || !cb) {
                return false;
            }
            if (ca->val != cb->val) {
                return false;
            }

            a.push(ca->left);
            a.push(ca->right);
            b.push(cb->left);
            b.push(cb->right);

        }

        if (a.empty() && b.empty()) {
            return true;
        }

        return false;

    }
};