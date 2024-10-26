//#include <stack>
//#include<iostream>
//#include<string>
//using namespace std;
//
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode(int x) : val(x), next(nullptr) {}
//};
//
//ListNode* doubleIt(ListNode* head) {
//    stack<int> s;
//    ListNode* temp = head;
//
//    while (temp) {
//        s.push(temp->val);
//        temp = temp->next;
//    }
//    string str;
//    int carry = 0;
//    while (!s.empty()) {
//        str += to_string(carry + s.top() * 2 % 10);
//        carry = s.top()*2 / 10;
//        s.pop();
//    }
//    ListNode* newHead = nullptr;
//    for (int i = str.length() - 1; i >= 0; i--) {
//        if (!newHead) {
//            newHead = new ListNode(str[i]-'0');
//            temp = newHead;
//        }
//        else {
//            temp->next = new ListNode(str[i] - '0');
//            temp = temp->next;
//        }
//    }
//    return newHead;
//}
