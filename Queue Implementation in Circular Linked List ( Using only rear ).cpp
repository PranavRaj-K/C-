#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
class Queue {
private:
    Node* rear;
public:
    Queue() {
        rear = NULL;
    }
    void enqueue(int value) {
        Node* newNode = new Node();
        newNode->data = value;

        if (rear == NULL) {
            rear = newNode;
            rear->next = rear;  
        } else {
            newNode->next = rear->next;
            rear->next = newNode;
            rear = newNode;
        }
    }
    void dequeue() {
        if (rear == NULL) {
            cout << "Queue Underflow" << endl;
            return;
        }
        Node* temp = rear->next;
        if (rear == rear->next) {
            rear = NULL;
        } else {
            rear->next = temp->next;
        }
        cout << "Deleted: " << temp->data << endl;
        delete temp;
    }
    void display() {
        if (rear == NULL) {
            cout << "Queue is empty" << endl;
            return;
        }
        Node* temp = rear->next; 
        cout << " Queue : ";
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != rear->next);
        cout << endl;
    }
};
int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
    return 0;
}
