#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

class LinkedList{
	private : 
		Node* head;
	public :
		LinkedList(){
			head = 0;
		}
		void insertatbeginning(int value){
			Node* newNode = new Node;
			newNode->data = value;
			if(head == 0){
				head = newNode;
				newNode->next=head; 
				return;
			}
			Node* temp;
			temp=head;
			while(temp->next != head){
				temp = temp->next;
			}
			newNode->next = head;
			head = newNode;
			temp->next = head;
		}
		void delete_at_end(){
			Node* prev = NULL;
			Node* temp = head;
			while(temp->next != head){
				prev = temp;
				temp = temp->next;
			}
			prev->next=head;
			delete temp;
		}
		void display(){
			Node* temp;
			temp = head;
			while(temp->next!=head){
				cout << temp->data << " -> ";
				temp = temp->next;
			}
			cout << temp->data << " -> " << "<Head>\n\n" << endl;
		}
};
int main(){
	LinkedList l;
	l.insertatbeginning(40);
	l.insertatbeginning(30);
	l.insertatbeginning(20);
	l.insertatbeginning(10);
	l.display();
	cout << "first deletion \n \n";
	l.delete_at_end();
	l.display();
	cout << "second deletion \n\n";
	l.delete_at_end();
	l.display();
	cout << "third deletion \n\n";
	l.delete_at_end() ;
	l.display();
	return 0;
}
