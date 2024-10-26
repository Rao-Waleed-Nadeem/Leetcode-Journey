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
//ListNode* mergeNodes(ListNode* head) {
//    ListNode* newHead = nullptr;
//    ListNode* temp = nullptr;
//    int sum = 0;
//    head = head->next;   
//
//    while (head) {
//        if (head->val == 0) {
//            if (sum > 0) {
//                ListNode* newNode = new ListNode(sum);
//                if (!newHead) {
//                    newHead = newNode;
//                    temp = newHead;
//                }
//                else {
//                    temp->next = newNode;
//                    temp = temp->next;
//                }
//                sum = 0;
//            }
//        }
//        else {
//            sum += head->val;
//        }
//        head = head->next;
//    }
//    return newHead;
//}
//
//int main()
//{
//	system("pause");
//	return 0;
//}