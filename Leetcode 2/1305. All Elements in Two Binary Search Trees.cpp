//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
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
//vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
//	vector<int>v;
//	inorder(root1, v);
//	inorder(root2, v);
//	sort(v.begin(), v.end());
//	return v;
//}
//
//int main()
//{
//	system("pause");
//	return 0;
//}