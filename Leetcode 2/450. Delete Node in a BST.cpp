//#include<iostream>
//#include<string>
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
//TreeNode* Delete(TreeNode* t, int k) {
//    if (!t) return nullptr;
//    if (k < t->val) {
//        t->left = Delete(t->left, k);
//    }
//    else if (k > t->val) {
//        t->right = Delete(t->right, k);
//    }
//    else {
//        if (!t->left) {
//            TreeNode* temp = t->right;
//            delete t;
//            return temp;
//        }
//        else if (!t->right) {
//            TreeNode* temp = t->left;
//            delete t;
//            return temp;
//        }
//        TreeNode* temp = t->right;
//        while (temp->left) {
//            temp = temp->left;
//        }
//        t->val = temp->val;
//        t->right = Delete(t->right, temp->val);
//    }
//    return t;
//}
//
//TreeNode* deleteNode(TreeNode* root, int key) {
//    return Delete(root, key);
//}
//
//
//int main()
//{
//	system("pause");
//	return 0;
//}