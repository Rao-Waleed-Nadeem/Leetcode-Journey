//#include<iostream>
//#include<string>
//using namespace std;
//
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};
//
//class AVLTree {
//public:
//    int data;
//    AVLTree* left, * right;
//    int height;
//    AVLTree(int d) : left(nullptr), right(nullptr), data(d), height(0) {}
//    AVLTree() : left(nullptr), right(nullptr), data(-1), height(-1) {}
//};
//
//int getHeight(AVLTree* tree) {
//    if (!tree) return -1;
//    return tree->height;
//}
//
//int getBF(AVLTree* tree) {
//    if (!tree) return 0;
//    return getHeight(tree->left) - getHeight(tree->right);
//}
//
//AVLTree* RightRotate(AVLTree* tree) {
//    AVLTree* x = tree->left;
//    if (!x) return tree; // Safeguard against nullptr
//
//    AVLTree* T1 = x->right;
//
//    x->right = tree;
//    tree->left = T1;
//
//    // Update heights
//    tree->height = 1 + max(getHeight(tree->left), getHeight(tree->right));
//    x->height = 1 + max(getHeight(x->left), getHeight(x->right));
//
//    return x;
//}
//
//AVLTree* LeftRotate(AVLTree* tree) {
//    AVLTree* x = tree->right;
//    if (!x) return tree; // Safeguard against nullptr
//
//    AVLTree* T1 = x->left;
//
//    x->left = tree;
//    tree->right = T1;
//
//    // Update heights
//    tree->height = 1 + max(getHeight(tree->left), getHeight(tree->right));
//    x->height = 1 + max(getHeight(x->left), getHeight(x->right));
//
//    return x;
//}
//AVLTree* insert(AVLTree* tree, int data) {
//    if (!tree) return new AVLTree(data);
//    if (data < tree->data)
//        tree->left = insert(tree->left, data);
//    else
//        tree->right = insert(tree->right, data);
//
//    tree->height = 1 + max(getHeight(tree->left), getHeight(tree->right));
//    int bf = getBF(tree);
//    if (bf > 1 && data < tree->left->data)
//        return RightRotate(tree);
//    if (bf < -1 && data > tree->right->data)
//        return LeftRotate(tree);
//    if (bf > 1 && data > tree->left->data) {
//        tree->left = LeftRotate(tree->left);
//        return RightRotate(tree);
//    }
//    if (bf < -1 && data < tree->right->data) {
//        tree->right = RightRotate(tree->right);
//        return LeftRotate(tree);
//    }
//    return tree;
//}
//
//void inorder(TreeNode* t, AVLTree*& a) {
//    if (t) {
//        inorder(t->left, a);
//        a = insert(a, t->val);
//        inorder(t->right, a);
//    }
//}
//
//TreeNode* avlToBST(AVLTree* avlTree) {
//    if (!avlTree) return nullptr;
//    TreeNode* node = new TreeNode(avlTree->data);
//    node->left = avlToBST(avlTree->left);
//    node->right = avlToBST(avlTree->right);
//    return node;
//}
//
//TreeNode* balanceBST(TreeNode* root) {
//    AVLTree* avlTree = nullptr;
//    inorder(root, avlTree);
//    return avlToBST(avlTree);
//}
//
//int main() {
//    system("pause");
//    return 0;
//}
