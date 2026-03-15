#include<iostream>
using namespace std;
class Academic_Record{
	private :
		
	public : 
		int r;
		float m;
	void Student_Detail(Academic_Record a){
			cout << "Enter Student Roll No : ";
			cin >> r;
			cout << "Enter Student Marks : ";
			cin >> m;
		}
};
class Sports_Record : public Academic_Record{
	private : 

	public :
		string sport_name;
		float sport_score;
	void Sport_Detail(Sports_Record a){
			cout << "Enter Sport Name : ";
			cin >> sport_name;
			cout << "Enter Sport Score : ";
			cin >> sport_score;
		}
};
class student : public Academic_Record , Sports_Record{
	private : 
	
	public :
		
	void Student_Detail(Academic_Record a){
			cout << "Enter Student Roll No : ";
			cin >> r;
			cout << "Enter Student Marks : ";
			cin >> m;
		}
	void Sport_Detail(Sports_Record a){
			cout << "Enter Sport Name : ";
			cin >> sport_name;
			cout << "Enter Sport Score : ";
			cin >> sport_score;
		}
};
int main()
{
	Academic_Record b;
	Sports_Record c;
	student s;
	s.Student_Detail(b);
	s.Sport_Detail(c);
	return 0;  
}
