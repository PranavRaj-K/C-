#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
}

class LinkedList(){
 	private :
 		Node* head;
	public :
		LinkedList(){
			head = nullptr;
			}
		void insertionatend(int value){
			Node* newnode = new Node();
			newnode->data = value;
			newnode->next = nullptr;
			if(head==nullptr){
				head = newnode;
				return;
			}
			Node* temp = head;
			while(temp->next != nullptr){
				temp = temp->next;
			}
			temp -> next = newNode;
		}
		void display(){
			Node* temp = head;
			while(temp !=  nullptr){
				cout << temp-> data << " -> ";
				temp = temp -> next;
			}
			if(temp == nullptr){
				cout << "NULL" << endl;
			}
		}
		void reverse(){
			Node* current,prev,next;
			prev=nullptr;
			current=head;
			next=nullptr;
			while(current!=nullptr){
				next = current->next;
				current->next=prev;
				prev=current;
				current=next;
			}
			head=prev;
		}
};
int main(){
	LinkedList l;
	l.insertatend(10);
	l.insertatend(20);
	l.insertatend(30);
	l.insertatend(40);
	l.insertatend(50);
	l.display();
	l.reverse();
	l.display();
	return 0;
}
