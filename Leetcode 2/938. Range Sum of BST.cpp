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
//void inorder(TreeNode* t, int low, int high, vector<int>& v) {
//	if (t) {
//		inorder(t->left, low, high, v);
//		if (t->val >= low && t->val <= high)v.push_back(t->val);
//		else if (t->val > low && t->val > high)return;
//		inorder(t->right, low, high, v);
//	}
//}
//
//int rangeSumBST(TreeNode* root, int low, int high) {
//	vector<int>v;
//	inorder(root, low, high, v);
//	int sum = 0;
//	for (int i = 0; i < v.size(); i++) {
//		sum += v[i];
//	}
//	return sum;
//}
//
//int main()
//{
//	system("pause");
//	return 0;
//}