//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode() : val(0), next(nullptr) {}
//	ListNode(int x) : val(x), next(nullptr) {}
//	ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//
//ListNode* swapNodes(ListNode* head, int k) {
//	vector<int>v;
//	ListNode* temp = head;
//	while (temp) {
//		v.push_back(temp->val);
//		temp = temp->next;
//	}
//	swap(v[k - 1], v[v.size() - k]);
//	temp = head;
//	for (int i = 0; i < k  ||i< v.size() - k+1; i++) {
//		if (temp->val != v[i])temp->val = v[i];
//		temp = temp->next;
//	}
//	return head;
//}
//
//int main()
//{
//	system("pause");
//	return 0;
//}