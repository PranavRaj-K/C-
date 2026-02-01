#include<iostream>
using namespace std;

class Hostel_Room{
	private : 
	
	public :
	int r_n[3]={0,0,0};
	int a=15,b=16,c=17,d=18,v,r1=1,r2=2,r3=3;
	string st1,st2,st3;
	void display_room_status(int d)
	{
		cout << "Rooms Status : " << endl;
		if(r_n[0]==0)
		{
			cout << "The Room Is vacant." << endl;
		}
		else
		{
			cout << "The FIRST Room Is Occupied By : " << st1 << endl;
		}
		if(r_n[1]==0)
		{
			cout << "The Room Is vacant." << endl;
		}
		else
		{
			cout << "The SECOND Room Is Occupied By : " << st2 << endl;
		}
		if(r_n[2]==0)
		{
			cout << "The Room Is vacant." << endl;
		}
		else
		{
			cout << "The THIRD Room Is Occupied By : " << st3 << endl;
		}
	}
	void Room_Allotment(int d)
	{
		cout << "Enter Student Name : " << endl;
		cin >> st1;
		z:
		cout << "Enter The Room You Want to Choose : \nRoom 1 = Enter 1 \nRoom 2 = Enter 2 \nRoom 3 = Enter 3" << endl;
		cin >> a;
		switch(a)
		{
			case 1 : {
				if(a == b || a == c)
				{
					cout << "The Room is Already Occupied , Choose Another Room." << endl;
					goto z;
				}
				else
				{
					cout << "The Room Is Alloted.\n" << endl;
					r_n[0]=1;
					a=1;
				}
				break;
			}
			case 2 : {
				if(a == b || a == c)
				{
					cout << "The Room is Already Occupied , Choose Another Room." << endl;
					goto z;
				}
				else
				{
					cout << "The Room Is Alloted.\n";
					r_n[1]=1;
					a=2;
				}
				break;
			}
			case 3 : {
				if(a == b || a == c)
				{
					cout << "The Room is Already Occupied , Choose Another Room." << endl;
					goto z;
				}
				else
				{
					cout << "The Room Is Alloted.\n";
					a=3;
					r_n[2]=1;
				}
				break;
			}
			default : {
				cout << "Enter a Valid Room Number." << endl;
				goto z;
				break;
			}
		}
		cout << "Enter Student Name : " << endl;
		cin >> st2;
		y:
		cout << "Enter The Room You Want to Choose : \n Room 1 = Enter 1 \n Room 2 = Enter 2 \n Room 3 = Enter 3" << endl;
		cin >> b;
		switch(b)
		{
			case 1 : {
				if(b == a || b == c)
				{
					cout << "The Room is Already Occupied , Choose Another Room." << endl;
					goto y;
				}
				else
				{
					cout << "The Room Is Alloted.\n";
					b=1;
					r_n[0]=1;
				}
				break;
			}
			case 2 : {
				if(b == a || b == c)
				{
					cout << "The Room is Already Occupied , Choose Another Room." << endl;
					goto y;
				}
				else
				{
					cout << "The Room Is Alloted.\n";
					b=2;
					r_n[1]=1;
				}
				break;
			}
			case 3 : {
				if(b == a || b == c)
				{
					cout << "The Room is Already Occupied , Choose Another Room." << endl;
					goto y;
				}
				else
				{
					cout << "The Room Is Alloted.\n";
					b=3;
					r_n[2]=1;
				}
				break;
			}
			default : {
				cout << "Enter a Valid Room Number." << endl;
				goto y;
				break;
			}
		}
		cout << "Enter Student Name : " << endl;
		cin >> st3;
		x:
		cout << "Enter The Room You Want to Choose : \n Room 1 = Enter 1 \n Room 2 = Enter 2 \n Room 3 = Enter 3" << endl;
		cin >> c;
		switch(c)
		{
			case 1 : {
				if(c == a || c == b)
				{
					cout << "The Room is Already Occupied , Choose Another Room." << endl;
					goto x;
				}
				else
				{
					cout << "The Room Is Alloted.\n";
					c=1;
					r_n[0]=1;
				}
				break;
			}
			case 2 : {
				if(c == a || c == b)
				{
					cout << "The Room is Already Occupied , Choose Another Room." << endl;
					goto x;
				}
				else
				{
					cout << "The Room Is Alloted.\n";
					c=2;
					r_n[1]=1;
				}
				break;
			}
			case 3 : {
				if(c == a || c == b)
				{
					cout << "The Room is Already Occupied , Choose Another Room." << endl;
					goto x;
				}
				else
				{
					cout << "The Room Is Alloted.\n";
					c=3;
					r_n[2]=1;
				}
				break;
			}
			default : {
				cout << "Enter a Valid Room Number." << endl;
				goto x;
				break;
			}
		}
	}
	void Room_Arrangement(int d){
		display_room_status(d);
		int w;
		k:
		cout << "If you want to Vacate Any Room press 1 else press 2 : ";
		cin >> w;
		if(w==1)
		{
			cout << "Enter The Room You Want To Vacate : " << endl;
			cin >> v;
				if(v==1)
			{
				r_n[1]=0;
				display_room_status(d);
			}
			else if(v==2)
			{
				r_n[2]=0;
				display_room_status(d);
			}
			else
			{
				r_n[3]=0;
				display_room_status(d);
			}
			goto k;
		}
		else
		{
			display_room_status(d);
		}
	}
};
int main()
{
	Hostel_Room j;
	j.display_room_status(10);
	j.Room_Allotment(10);
	j.Room_Arrangement(10);
	return 0;
}