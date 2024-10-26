//#include<iostream>
//#include<string>
//#include<vector>
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
//vector<vector<int>> levelOrder(TreeNode* root) {
//	queue<TreeNode*>q;
//	vector<vector<int>>v;
//	if (!root)return v;
//	q.push(root);
//	while (!q.empty()) {
//		int q_size = q.size();
//		vector<int>level;
//		for (int i = 0; i < q_size; i++) {
//			TreeNode* temp = q.front();
//			level.push_back(temp->val);
//			if (temp->left) {
//				q.push(temp->left);
//
//			}
//			if (temp->right) {
//				q.push(temp->right);
//
//			}
//			q.pop();
//		}
//		v.push_back(level);
//	}
//	return v;
//}
//
//int main()
//{
//	system("pause");
//	return 0;
//}