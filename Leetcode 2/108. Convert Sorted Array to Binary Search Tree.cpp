//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};
//
//TreeNode* insert(TreeNode* root, int value) {
//    if (root == nullptr) {
//        return new TreeNode(value);
//    }
//    if (value < root->val) {
//        root->left = insert(root->left, value);
//    }
//    else if (value > root->val) {
//        root->right = insert(root->right, value);
//    }
//    return root;
//}
//
//void makeTree(TreeNode*& root, int start, int end, const vector<int>& v) {
//    if (start > end) return;
//    int mid = (start + end) / 2;
//    root = insert(root, v[mid]);
//    makeTree(root->left, start, mid - 1, v);
//    makeTree(root->right, mid + 1, end, v);
//}
//
//TreeNode* sortedArrayToBST(vector<int>& nums) {
//    TreeNode* t = nullptr;
//    makeTree(t, 0, nums.size() - 1, nums);
//    return t;
//}
//
//
//
//int main() {
//    vector<int> nums = { -10, -3, 0, 5, 9 };
//    TreeNode* root = sortedArrayToBST(nums);
//    system("pause");
//    return 0;
//}
