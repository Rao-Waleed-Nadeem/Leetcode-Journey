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
//ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
//	ListNode* temp = list1, * temp1 = nullptr, * temp2 = nullptr;
//	for (int i = 0; i <= b; i++) {
//		if (i == a - 1)
//			temp1 = temp;
//		if (i == b)
//			temp2 = temp;
//		temp = temp->next;
//	}
//	temp = temp1;
//	while (temp->next != temp2->next) {
//		ListNode* temp3 = temp->next;
//		temp->next = temp3->next;
//		delete temp3;
//	}
//	temp = list2;
//	while (temp->next) {
//		temp = temp->next;
//	}
//	temp->next = temp2;
//	temp1->next = list2;
//	return list1;
//}
//
//int main()
//{
//	system("pause");
//	return 0;
//}