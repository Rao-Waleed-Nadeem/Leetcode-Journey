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
//bool inorder(TreeNode* p,TreeNode*q) {
//	if (p && q) {
//		if (!inorder(p->left, q->left))return false;
//		if (p->val != q->val)return false;
//		if (!inorder(p->right, q->right))return false;
//	}
//	if (p && !q)return false;
//	if (!p && q)return false;
//	return true;
//}
//
//bool isSameTree(TreeNode* p, TreeNode* q) {
//	return inorder(p, q);
//}
//
//int main()
//{
//	system("pause");
//	return 0;
//}