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
//TreeNode* check(TreeNode*& root, int& index, vector<int>& preorder, vector<int>& inorder, int start, int end) {
//    if (start > end || index >= preorder.size()) return nullptr;
//
//    // Create new node for current root
//    root = new TreeNode(preorder[index]);
//    int r_index = start;
//    for (int i = start; i <= end; i++) {
//        if (inorder[i] == root->val) {
//            r_index = i;
//            break;
//        }
//    }
//
//    index++;
//    root->left = check(root->left, index, preorder, inorder, start, r_index - 1);
//    root->right = check(root->right, index, preorder, inorder, r_index + 1, end);
//
//    return root;
//}
//
//TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//    TreeNode* root = nullptr;
//    int index = 0;
//    return check(root, index, preorder, inorder, 0, inorder.size() - 1);
//}
//
//int main()
//{
//	system("pause");
//	return 0;
//}