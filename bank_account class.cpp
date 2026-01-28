#include<iostream>
using namespace std;
class bank_account{
	private :
		
	public :
		float b = 0;
		void bank(bank_account a)
		{
			b=0.00;
		}
};
class Account_Manager : public bank_account{
	private : 
		float c,d;
	public :
		void deposition(bank_account a)
		{
			cout << "Current bank Balance : " << b << endl;
			cout << "Enter The Deposition money : ";
			cin >> c;
			b = b + c;
			cout << "Updated Balance : " << b << endl;
		}
		void deduct(bank_account a)
		{
			cout << "current bank Balance : " << b << endl;
			cout << "Enter Deduction money : ";
			cin >> d;
			b = b-d;
			cout << "Upadated Balance : " << b << endl;
		}
};
int main()
{
	bank_account g;
	Account_Manager h;
	int a;
	z:
	cout << "Enter a Number For Desired Operation :\n 1.desposition \n 2.deduct \n 3.no operation \n";
	cin >> a;
	switch(a)
	{
		case 1 : {g.bank(g);
			h.deposition(g);
			goto z;
			break;
		}
		case 2 : {g.bank(g);
			h.deduct(g); 
			goto z;
			break;
		}
		case 3 : {
			break;
		}
		default : {cout << "Enter a valid Operation" << endl;
					goto z;
			break;
		}
	}
	return 0;
}
