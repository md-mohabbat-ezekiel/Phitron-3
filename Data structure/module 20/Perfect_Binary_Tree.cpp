#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : val(value), left(nullptr), right(nullptr) {}
};

int countNodes(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }

    return 1 + countNodes(root->left) + countNodes(root->right);
}

bool isPerfectBinaryTree(TreeNode* root) {
    if (root == nullptr) {
        return true;
    }

    int height = log2(countNodes(root) + 1);

    return countNodes(root) == pow(2, height) - 1;
}

int main() {
    // Read the input level order binary tree
    int value;
    TreeNode* root = nullptr;
    queue<TreeNode**> q;
    q.push(&root);

    while (!q.empty()) {
        TreeNode** current = q.front();
        q.pop();
        cin >> value;

        if (value != -1) {
            *current = new TreeNode(value);
            q.push(&((*current)->left));
            q.push(&((*current)->right));
        }
    }

    // Determine if the binary tree is perfect or not
    bool isPerfect = isPerfectBinaryTree(root);

    // Output the result
    if (isPerfect) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
