#include<iostream>
#include<string>
using namespace std;

class Bank{
	public :
		int account_number;
		float balance;
		int contact_info;
		string name;
		Bank(){
			balance=0.00;
		}
		
};
class accs : public Bank{
	public :
		int s(Bank a[],int z){
			for (int i=0;i<5;i++){
				if(a[i].account_number == z){
					return 1;
				}
			}
			return -1;
		}
		void c_d(Bank a[],int b){
			cout << "Enter Name : ";
			cin >> a[b].name;
			cout << "Enter Contact Number : ";
			cin >> a[b].contact_info;
			cout << "Enter An Account NUmber : ";
			cin >> a[b].account_number;
		}
		void dep(Bank a[],int b){
			int d;
				cout << "Enter Deposit Amount : ";
				cin >> d;
				a[b].balance += d;	
		}
		void withdraw(Bank a[],int b){
			int w;
			cout << "Your Balance : " << a[b].balance << endl;
			cout << "Enter Amount to Withdraw : ";
			cin >> w;
			if(w<a[b].balance){
				a[b].balance=w;
			}
			else{
				cout << "INSUFFICIENT BALANCE\n";
			}
		}
		void BALANCE(Bank a[],int b){
			cout << "Your Bank Balance : " << a[b].balance << endl;
		}
		void Update(Bank a[],int b){
			int c;
			z:
			cout << "What Would You Like To Update : " << "1 = Name " << endl << "2 = Account Number";
			cout << endl << "3 = Contact Information" << endl << "4 = no update\n";
			cin >> c;
			switch(c){
				case 1 : {
					cout << "Enter New Name : ";
					cin >> a[b].name;
					goto z;
					break;
				}
				case 2 : {
					cout << "Enter New Account Number : ";
					cin >> a[b].account_number;
					goto z;
					break;
				}
				case 3: {
					cout << "Enter New Contact Number : ";
					cin >> a[b].contact_info;
					goto z;
					break;
				}
				case 4: {
					return;
				}
				default : {
					cout << "ENTER A VALID NUMBER";
					goto z;
					break;
				}
			} 
		}
};
int main(){
	Bank B[6];
	accs m;
	int a,l,k,i=0;
    y:
    cout<<"1 -> Create An Account" << endl;
    cout<<"2 -> Deposit money" <<  endl;
    cout<<"3 -> Withdraw Moeny" << endl;
    cout<<"4 -> View Balance" << endl;
    cout<<"5 -> Account Details Update" << endl;
    cout<<"6 -> Exit" << endl;
    cin>>a;
    switch(a){
    case 1: if(i<6){m.c_d(B,i);i++;}
            else{cout<< "No More Accounts Can Be Created" << endl;}
            goto y;
            break;
            
    case 2: cout<<"Enter your Account Number\n";
            cin>>k;
            l=m.s(B,k);
            if(l == -1){cout<<"No Account Found\n";}
            else{m.dep(B,l);}
            goto y;
            break;
            
    case 3: cout<<"Enter account number\n";
            cin>>k;
            l=m.s(B,k);
            if(l == -1){cout<<"Account not found\n";}
            else{m.withdraw(B,l);}
            goto y;
            break;
            
    case 4: cout<<"Enter account number\n";
            cin>>k;
            l=m.s(B,k);
            if(l == -1){cout<<"Account not found\n";}
            else{m.BALANCE(B,l);}
            goto y; 
            break;
            
    case 5: cout<<"Enter account number\n";
            cin>>k;
            l=m.s(B,k);
            if(l == -1){cout<<"Account not found\n";}
            else{m.Update(B,l);}
            goto y; 
            break;
            
    case 6: break;
    return 0;
}
}
