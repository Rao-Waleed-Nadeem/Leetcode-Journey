//#include<iostream>
//#include<string>
//#include<queue>
//#include<sstream>
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//TreeNode* insertLevelOrder(TreeNode* root, int val) {
//    TreeNode* newNode = new TreeNode(val);
//    if (!root) {
//        return newNode;
//    }
//
//    queue<TreeNode*> q;
//    q.push(root);
//
//    while (!q.empty()) {
//        TreeNode* temp = q.front();
//        q.pop();
//
//        if (!temp->left) {
//            temp->left = newNode;
//            break;
//        }
//        else {
//            q.push(temp->left);
//        }
//
//        if (!temp->right) {
//            temp->right = newNode;
//            break;
//        }
//        else {
//            q.push(temp->right);
//        }
//    }
//    return root;
//}
//
//string serialize(TreeNode* root) {
//    if (!root) return "n"; 
//    string s;
//    queue<TreeNode*> q;
//    q.push(root);
//
//    while (!q.empty()) {
//        TreeNode* temp = q.front();
//        q.pop();
//        if (temp) {
//            s += to_string(temp->val) + ",";
//            q.push(temp->left);
//            q.push(temp->right);
//        }
//        else {
//            s += "n,";
//        }
//    }
//    if (!s.empty()) {
//        s.pop_back();
//    }
//    return s;
//}
//
//TreeNode* deserialize(string data) {
//    if (data == "n") return nullptr;
//
//    stringstream ss(data);
//    string item;
//    getline(ss, item, ',');
//    TreeNode* root = new TreeNode(stoi(item));
//    queue<TreeNode*> q;
//    q.push(root);
//    while (getline(ss, item, ',')) {
//        TreeNode* parent = q.front();
//        q.pop();
//
//        if (item != "n") {
//            parent->left = new TreeNode(stoi(item));
//            q.push(parent->left);
//        }
//
//        if (getline(ss, item, ',')) {
//            if (item != "n") {
//                parent->right = new TreeNode(stoi(item));
//                q.push(parent->right);
//            }
//        }
//    }
//    return root;
//}
//
//int main()
//{
//	system("pause");
//	return 0;
//}