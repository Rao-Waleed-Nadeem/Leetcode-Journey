//#include<iostream>
//#include<string>
//using namespace std;
//
//class Node {
//public:
//    int key, value;
//    Node* prev;
//    Node* next;
//    Node(int key, int value) {
//        this->key = key;
//        this->value = value;
//        prev = next = nullptr;
//    }
//};
//
//class MyHashMap {
//    Node* head;
//
//public:
//    MyHashMap() {
//        head = nullptr;
//    }
//
//    void put(int key, int value) {
//        if (!head) {
//            head = new Node(key, value);
//            return;
//        }
//        Node* temp = head;
//        while (temp) {
//            if (temp->key == key) {
//                temp->value = value;
//                return;
//            }
//            if (!temp->next) break;
//            temp = temp->next;
//        }
//        Node* newNode = new Node(key, value);
//        temp->next = newNode;
//        newNode->prev = temp;
//    }
//
//    int get(int key) {
//        Node* temp = head;
//        while (temp) {
//            if (key == temp->key) return temp->value;
//            temp = temp->next;
//        }
//        return -1;
//    }
//
//    void remove(int key) {
//        Node* temp = head;
//        while (temp) {
//            if (temp->key == key) {
//                if (temp->prev) temp->prev->next = temp->next;
//                if (temp->next) temp->next->prev = temp->prev;
//                if (temp == head) head = temp->next;
//                delete temp;
//                return;
//            }
//            temp = temp->next;
//        }
//    }
//};
//
//int main()
//{
//	system("pause");
//	return 0;
//}