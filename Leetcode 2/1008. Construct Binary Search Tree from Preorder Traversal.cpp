//#include<iostream>
//#include<string>
//#include<vector>
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
//TreeNode* insert(TreeNode* t, int val) {
//	if (!t)return new TreeNode(val);
//	if (val < t->val)t->left = insert(t->left, val);
//	if (val > t->val)t->right = insert(t->right, val);
//	return t;
//}
//
//TreeNode* bstFromPreorder(vector<int>& preorder) {
//	TreeNode* root = nullptr;
//	for (int i = 0; i < preorder.size(); i++) {
//		root = insert(root, preorder[i]);
//	}
//	return root;
//}
//
//int main()
//{
//	system("pause");
//	return 0;
//}