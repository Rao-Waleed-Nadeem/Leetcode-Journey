//#include<iostream>
//#include<string>
//using namespace std;
//
//TreeNode* insert(TreeNode* root, int value) {
//    if (root == nullptr) {
//        return new TreeNode(value);
//    }
//    if (value < root->val) {
//        root->left = insert(root->left, value);
//    }
//    else if (value > root->val) {
//        root->right = insert(root->right, value);
//    }
//    return root;
//}
//
//void makeTree(TreeNode*& root, int start, int end, const vector<int>& v) {
//    if (start > end) return;
//    int mid = (start + end) / 2;
//    root = insert(root, v[mid]);
//    makeTree(root->left, start, mid - 1, v);
//    makeTree(root->right, mid + 1, end, v);
//}
//
//
//TreeNode* sortedListToBST(ListNode* head) {
//    vector<int>v;
//    while (head) {
//        v.push_back(head->val);
//        head = head->next;
//    }
//    TreeNode* t = nullptr;
//    makeTree(t, 0, v.size() - 1, v);
//    return t;
//}
//
//int main()
//{
//	system("pause");
//	return 0;
//}