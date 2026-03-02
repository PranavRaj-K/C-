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
		void insertatbeggining(int a){
			Node* newNode = new Node();
			newNode->data=a;
			newNode->next=head;
			head = newNode;
		}
		void insertattheend(int a){
			Node* newNode = new Node();
			newNode->data=a;
			newNode->next=0;
			
			if(head==0){
				head=newNode;
				return;
			}
			Node* temp = head;
			while(temp->next!=0){
			temp = temp->next;
			}
			temp->next=newNode;		
		}
		void displayanddelete(){
			Node* temp;
			while (temp != 0 && head!=0){
				temp = head;
				cout << "Deleted The Element --> " << temp->data << endl << endl;
				head = temp->next;
				delete temp;
			}
			cout << "NULL" << endl;
		}
};
int main(){
	LinkedList list;
	
	list.insertatbeggining(50);
	list.insertatbeggining(40);
	list.insertatbeggining(30);
	list.insertatbeggining(20);
	list.insertatbeggining(10); 
	
	list.displayanddelete();
	
	return 0;
}
