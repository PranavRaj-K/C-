#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
};

class linkedlist {
private:
    node *head;

public:
    linkedlist() {
        head = 0;
    }

    void insertatend(int val) {
        node *newnode = new node;
        newnode->data = val;

        if (head == 0) {
            newnode->next = newnode;
            head = newnode;
        } else {
            node *temp = head;
            while (temp->next != head)
                temp = temp->next;

            temp->next = newnode;
            newnode->next = head;
        }
    }

    void display() {
        if (head == 0) return;

        node *temp = head;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);

        cout << "<head>\n";
    }
};

int main() {
    linkedlist l;

    l.insertatend(10);
    l.insertatend(20);
    l.insertatend(30);
	l.insertatend(40);
    l.display();

    return 0;
}
