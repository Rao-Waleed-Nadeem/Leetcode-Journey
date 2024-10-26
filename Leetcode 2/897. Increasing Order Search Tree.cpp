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
//void inorder(TreeNode* t, vector<int>& v) {
//	if (t) {
//		inorder(t->left, v);
//		v.push_back(t->val);
//		inorder(t->right, v);
//	}
//}
//
//TreeNode* insert(TreeNode* t, int val) {
//	if (!t)return new TreeNode(val);
//	t->right = insert(t->right, val);
//	return t;
//}
//
//TreeNode* increasingBST(TreeNode* root) {
//	vector<int>v;
//	TreeNode* New = nullptr;
//	inorder(root, v);
//	for (int i = 0; i < v.size(); i++) {
//		New = insert(New, v[i]);
//	}
//	return New;
//}
//
//int main()
//{
//	system("pause");
//	return 0;
//}