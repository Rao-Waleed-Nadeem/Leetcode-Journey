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
//void inorder(TreeNode* root, vector<int>& v) {
//	if (root) {
//		inorder(root->left, v);
//		v.push_back(root->val);
//		inorder(root->right, v);
//	}
//}
//
//bool isValidBST(TreeNode* root) {
//	vector<int>v;
//	inorder(root, v);
//	for (int i = 0; i < v.size()-1; i++) {
//		if (v[i] >= v[i + 1])return false;
//	}
//	return true;
//}
//
//int main()
//{
//	system("pause");
//	return 0;
//}