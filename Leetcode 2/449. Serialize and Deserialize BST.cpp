//#include <string>
//#include <queue>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//};
//
//string serialize(TreeNode* root) {
//    if (root == nullptr) return "";
//    queue<TreeNode*> q;
//    string str;
//    q.push(root);
//    while (!q.empty()) {
//        TreeNode* current = q.front();
//        if (current) {
//            str += to_string(current->val) + ".";
//            q.push(current->left);
//            q.push(current->right);
//        }
//        else {
//            str += "null."; // Handle null nodes to preserve structure
//        }
//        q.pop();
//    }
//    return str;
//}
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
//TreeNode* deserialize(string data) {
//    if (data.empty()) return nullptr; // Handle empty string case
//    vector<int> v;
//    string temp = "";
//
//    // Extract integers from the serialized data
//    for (char c : data) {
//        if (c == '.') {
//            if (!temp.empty()) {
//                try {
//                    v.push_back(stoi(temp)); // Try converting to int
//                }
//                catch (const std::invalid_argument&) {
//                    // Handle invalid argument case if necessary
//                    // For now, we just skip it
//                }
//                temp = "";
//            }
//        }
//        else {
//            temp += c;
//        }
//    }
//
//    // Check if there's any remaining number after the loop
//    if (!temp.empty()) {
//        try {
//            v.push_back(stoi(temp));
//        }
//        catch (const std::invalid_argument&) {
//            // Handle invalid argument case if necessary
//        }
//    }
//
//    TreeNode* root = nullptr;
//    for (int value : v) {
//        root = insert(root, value);
//    }
//
//    return root;
//}
//// For demonstration purposes
//void printInOrder(TreeNode* root) {
//    if (root) {
//        printInOrder(root->left);
//        cout << root->val << " ";
//        printInOrder(root->right);
//    }
//}
//
//int main() {
//    // Example usage
//    TreeNode* root = new TreeNode(10);
//    insert(root, 5);
//    insert(root, 15);
//    insert(root, 2);
//    insert(root, 7);
//    insert(root, 12);
//    insert(root, 20);
//
//    string serialized = serialize(root);
//    cout << "Serialized: " << serialized << endl;
//
//    TreeNode* deserializedRoot = deserialize(serialized);
//    cout << "In-order of deserialized tree: ";
//    printInOrder(deserializedRoot);
//    cout << endl;
//
//    return 0;
//}
