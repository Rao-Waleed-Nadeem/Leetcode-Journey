#include<iostream>
#include<string>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int v) : val(v), next(nullptr) {}
};

class MyLinkedList {
    Node* head;
    int size;  

public:
    MyLinkedList() {
        head = nullptr;
        size = 0;
    }

    int get(int index) {
        if (index < 0 || index >= size) return -1; 
        Node* temp = head;
        for (int i = 0; i < index; i++) {
            temp = temp->next;
        }
        return temp->val;
    }

    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        size++;
    }

    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
        }
        else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        size++;
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) return;  
        if (index == 0) {
            addAtHead(val);
        }
        else {
            Node* temp = head;
            for (int i = 0; i < index - 1; i++) {
                temp = temp->next;
            }
            Node* newNode = new Node(val);
            newNode->next = temp->next;
            temp->next = newNode;
            size++;
        }
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return; 
        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        else {
            Node* temp = head;
            for (int i = 0; i < index - 1; i++) {
                temp = temp->next;
            }
            Node* nodeToDelete = temp->next;
            temp->next = nodeToDelete->next;
            delete nodeToDelete;
        }
        size--;
    }
};


int main()
{
	system("pause");
	return 0;
}