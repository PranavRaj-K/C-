#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;

    Node(int value){
        data = value;
        prev = NULL;
        next = NULL;
    }
};

class Double_LinkedList{
private:
    Node* head;

public:
    Double_LinkedList(){
        head = NULL;
    }

    void insertatbeginning(int value){
        Node* newNode = new Node(value);

        if(head != NULL){
            head->prev = newNode;
            newNode->next = head;
        }

        head = newNode;
    }

    void display(){
        if(head == NULL){
            cout << "List is empty";
            return;
        }

        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main(){
    Double_LinkedList l;
    l.insertatbeginning(40);
    l.insertatbeginning(30);
    l.insertatbeginning(20);
    l.insertatbeginning(10);
    l.display();
    return 0;
}
