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
//int pairSum(ListNode* head) {
//	vector<int>v;
//	while (head) {
//		v.push_back(head->val);
//		head = head->next;
//	}
//	int sum = 0;
//	for (int i = 0,j=v.size()-1; i < v.size() / 2;j--, i++) {
//		sum = max(sum, v[i] + v[j]);
//	}
//	return sum;
//}
//
//int main()
//{
//	system("pause");
//	return 0;
//}