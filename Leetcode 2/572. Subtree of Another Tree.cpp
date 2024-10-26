//#include<iostream>
//#include<string>
//#include<queue>
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
//void inorder(TreeNode* root, string& s) {
//    if (root) {
//        inorder(root->left, s);
//        inorder(root->right, s);
//        s += to_string(root->val) + ",";
//    }
//}
//
//bool isSubtree(TreeNode* root, TreeNode* subRoot) {
//    string s1, s2;
//    inorder(root, s1);
//    inorder(subRoot, s2);
//    return s1.find(s2) != string::npos;
//}
//
//int main()
//{
//	system("pause");
//	return 0;
//}