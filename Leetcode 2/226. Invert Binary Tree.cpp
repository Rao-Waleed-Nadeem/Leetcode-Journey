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
//void preorder(TreeNode*& p) {
//	if (p) {
//		TreeNode* temp = p->left;
//		p->left = p->right;
//		p->right = temp;
//		preorder(p->left);
//		preorder(p->right);
//	}
//}
//
//TreeNode* invertTree(TreeNode* root) {
//	preorder(root);
//	return root;
//}
//
//int main()
//{
//	system("pause");
//	return 0;
//}