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
				head = nullptr;
				}
			void insertatend(int value){
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
				temp -> next = newnode;
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
			void reverseuntilkey(int k){
				Node* current;
				Node* prev;
				Node* next;
				Node* temp;
				prev=nullptr;
				current=head;
				next=nullptr;
				while(current!=nullptr){
					next = current->next;
					if(current->data == k){
					    temp = current;
					    while(current!=nullptr){
					        if(current->next==nullptr){
                                current->next = temp;
					        }
					}
					current->next = prev;
					prev = current;
					current = next;
				}
				head->next=current;
				head=prev;
			}
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
		l.reverseuntilkey(30);
		l.display();
		return 0;
	}
