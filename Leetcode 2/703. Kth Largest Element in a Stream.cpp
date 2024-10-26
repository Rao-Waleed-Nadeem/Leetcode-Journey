//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//
//class Node {
//public:
//    int val;
//    Node* next;
//    Node* prev;
//    Node(int v) {
//        val = v;
//        prev = next = nullptr;
//    }
//};
//
//
//class KthLargest {
//    Node* node;
//    int k;
//public:
//
//    void insert(Node*& n, int val) {
//        Node* newNode = new Node(val);
//
//        if (!n) {
//            n = newNode;
//            return;
//        }
//
//        if (val > n->val) {
//            newNode->next = n;
//            n->prev = newNode;
//            n = newNode;
//            return;
//        }
//
//        Node* temp = n;
//        while (temp->next && temp->next->val > val) {
//            temp = temp->next;
//        }
//
//        newNode->next = temp->next;
//        if (temp->next) {
//            temp->next->prev = newNode;
//        }
//        temp->next = newNode;
//        newNode->prev = temp;
//    }
//
//    KthLargest(int k, vector<int>& nums) : k(k), node(nullptr) {
//        sort(nums.begin(), nums.end(), greater<int>());
//        for (int num : nums) {
//            insert(node, num);
//        }
//    }
//
//    int add(int val) {
//        insert(node, val);
//        Node* temp = node;
//
//        for (int i = 1; i < k && temp; i++) {
//            temp = temp->next;
//        }
//
//        return temp ? temp->val : -1;  
//    }
//};
//
//
//int main()
//{
//	system("pause");
//	return 0;
//}