//#include<iostream>
//#include<string>
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
//ListNode* deleteMiddle(ListNode* head) {
//	if (!head->next)return nullptr;
//	ListNode* slow = head, * fast = head->next;
//	while (fast->next && fast->next->next) {
//		fast = fast->next->next;
//		slow = slow->next;
//	}
//	ListNode* temp = slow->next;
//	slow->next = slow->next->next;
//	delete temp;
//	return head;
//}
//
//int main()
//{
//	system("pause");
//	return 0;
//}