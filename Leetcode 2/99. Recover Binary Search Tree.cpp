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
//void inorder(TreeNode* t,vector<TreeNode*>&v) {
//	if (t) {
//		inorder(t->left,v);
//		for (int i = 0; i < v.size(); i++) {
//			if (t->val < v[i]->val)
//			{
//				swap(t->val, v[i]->val);
//			}
//		}
//		v.push_back(t);
//		inorder(t->right,v);
//	}
//}
//
//void recoverTree(TreeNode* root) {
//	vector<TreeNode*>v;
//	inorder(root,v);
//}
//
//int main()
//{
//	system("pause");
//	return 0;
//}