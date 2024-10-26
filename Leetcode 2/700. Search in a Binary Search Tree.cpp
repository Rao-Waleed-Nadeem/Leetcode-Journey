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
//TreeNode* search(TreeNode* t, int val) {
//	if (t) {
//		if (t->val == val)return t;
//		if (val < t->val)return search(t->left, val);
//		else return search(t->right, val);
//	}
//	return nullptr;
//}
//
//TreeNode* searchBST(TreeNode* root, int val) {
//	return search(root, val);
//}
//
//int main()
//{
//	system("pause");
//	return 0;
//}