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
//int kthSmallest(TreeNode* root, int k) {
//	vector<int>v;
//	inorder(root, v);
//	return v[k - 1];
//}
//
//int main()
//{
//	system("pause");
//	return 0;
//}