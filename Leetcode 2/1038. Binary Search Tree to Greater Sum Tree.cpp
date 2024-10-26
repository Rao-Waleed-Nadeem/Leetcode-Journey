//#include<iostream>
//#include<string>
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode() : val(0), left(nullptr), right(nullptr) {}
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};
//
//void reverseInorder(TreeNode* t, int& sum) {
//    if (t) {
//        reverseInorder(t->right, sum);
//        sum += t->val;
//        t->val = sum;
//        reverseInorder(t->left, sum);
//    }
//}
//TreeNode* bstToGst(TreeNode* root) {
//    int sum = 0;
//    reverseInorder(root, sum);
//    return root;
//}
//
//int main()
//{
//	system("pause");
//	return 0;
//}