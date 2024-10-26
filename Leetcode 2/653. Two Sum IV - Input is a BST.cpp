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
//bool findTarget(TreeNode* root, int k) {
//    if (!root) return false; // Check if the root is null
//
//    std::unordered_set<int> seen; // To store node values we've seen
//
//    // Define a stack for iterative traversal
//    std::stack<TreeNode*> stack;
//    stack.push(root);
//
//    while (!stack.empty()) {
//        TreeNode* current = stack.top();
//        stack.pop();
//
//        // Check if the complement (k - current->val) has been seen
//        if (seen.count(k - current->val)) {
//            return true; // We found a pair
//        }
//
//        // Add the current node's value to the seen set
//        seen.insert(current->val);
//
//        // Push left and right children onto the stack
//        if (current->right) stack.push(current->right);
//        if (current->left) stack.push(current->left);
//    }
//
//    return false; // No pair found that sums to k
//}
//
//int main()
//{
//	system("pause");
//	return 0;
//}