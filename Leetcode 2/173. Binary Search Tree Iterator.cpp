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
//class BSTIterator {
//	vector<int>v;
//	int i;
//public:
//
//	void inorder(TreeNode* t, vector<int>& v) {
//		if (t) {
//			inorder(t->left, v);
//			v.push_back(t->val);
//			inorder(t->right, v);
//		}
//	}
//
//    BSTIterator(TreeNode* root):i(-1) {
//		inorder(root, v);
//    }
//
//    int next() {
//		return v[++i];
//    }
//
//    bool hasNext() {
//		return i != v.size() - 1;
//    }
//};
//
//int main()
//{
//	system("pause");
//	return 0;
//}