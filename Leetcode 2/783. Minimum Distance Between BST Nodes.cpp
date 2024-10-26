//#include<iostream>
//#include<string>
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
//void inorder(TreeNode* t, int& prev, int& diff) {
//    if (t) {
//        inorder(t->left, prev, diff);
//        if (prev != -1) {
//            diff = min(diff, t->val - prev);
//        }
//        prev = t->val;
//        inorder(t->right, prev, diff);
//    }
//}
//
//int minDiffInBST(TreeNode* root) {
//    int diff = INT_MAX;
//    int prev = -1;
//    inorder(root, prev, diff);
//    return diff;
//}
//
//int main()
//{
//	system("pause");
//	return 0;
//}