//#include<iostream>
//#include<string>
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//TreeNode* Find(TreeNode* root, TreeNode* p, TreeNode* q) {
//	if (p->val < root->val && q->val < root->val)
//		return Find(root->left, p, q);
//	else if (p->val > root->val && q->val > root->val)
//		return Find(root->right, p, q);
//	return root;
//}
//
//TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//	return Find(root, p, q);
//}
//
//int main()
//{
//	system("pause");
//	return 0;
//}