//#include<iostream>
//#include<string>
//using namespace std;
//
//class Node {
//public:
//    int val;
//    Node * next;
//    Node(int v):val(v),next(nullptr){}
//};
//
//class MyLinkedList {
//    Node* head;
//    int index;
//public:
//    MyLinkedList() {
//        head = nullptr;
//        index = -1;
//    }
//
//    int get(int index) {
//        if (index<this->index || index>this->index)return -1;
//        if (index == 0)return head->val;
//        Node* temp = head;
//        for (int i = 0;; i++) {
//            if (i == index)return temp->val;
//            temp = temp->next;
//        }
//    }
//
//    void addAtHead(int val) {
//        if (!head)head = new Node(val);
//        else {
//            Node* temp = new Node(val);
//            temp->next = head;
//            head = temp;
//        }
//        this->index++;
//    }
//
//    void addAtTail(int val) {
//        if (!head)head = new Node(val);
//        else {
//            Node* temp = head;
//            while (temp->next) {
//                temp = temp->next;
//            }
//            temp->next = new Node(val);
//        }
//        this->index++;
//    }
//
//    void addAtIndex(int index, int val) {
//        if (index == 0) {
//            if (!head)head = new Node(val);
//            else {
//                Node* temp = new Node(val);
//                temp->next = head;
//                head = temp;
//            }
//            this->index++;
//            return;
//        }
//        if (index <= this->index) {
//            Node* temp = head;
//            for (int i = 0; i < index - 1; i++) {
//                temp = temp->next;
//            }
//            Node* temp1 = new Node(val);
//            temp1->next = temp->next;
//            temp->next = temp1;
//        }
//        this->index++;
//    }
//
//    void deleteAtIndex(int index) {
//        if (index == 0) {
//            if (head) {
//                Node* temp = head;
//                head = head->next;
//                delete temp;
//            }
//            this->index--;
//            return;
//        }
//        if (index <= this->index) {
//            Node* temp = head;
//            for (int i = 0; i < index-1; i++) {
//                temp = temp->next;
//            }
//            Node* temp1 = temp->next;
//            temp = temp1->next;
//            delete temp1;
//        }
//        this->index--;
//    }
//};
//
//int main()
//{
//	system("pause");
//	return 0;
//}