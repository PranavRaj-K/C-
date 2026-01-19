//create a class called student in which there are three subjects and define 2 functions which displays avg marks and max marks for three subjects//
#include <iostream>
using namespace std;

class student{
	private:
		float avg;
	public:
		float average(int s1,int s2,int s3){
			avg = (s1+s2+s3)/3;
			return avg;
		}
		int max(int s1,int s2,int s3){
			if(s1>s2&&s1>s3)
				return s1;
			if(s2>s1&&s2>s3)
				return s2;
			if(s3>s1&&s3>s2)
				return s3;
		}
};
int main()
{
	student st1,st2,st3,st4;
	cout << " student 1 avg marks : " << st1.average(50,60,70) << endl;
	cout << "\n student 1 max marks : " << st1.max(50,60,70) << endl;
	cout << "\n student 2 avg marks : " << st2.average(60,70,80) << endl;
	cout << "\n student 2 max marks : " << st2.max(60,70,80) << endl;
	cout << "\n student 3 avg marks : " << st3.average(30,40,50) << endl;
	cout << "\n student 3 max marks : " << st3.max(30,40,50) << endl;
	cout << "\n student 4 avg marks : " << st4.average(45,55,65) << endl;
	cout << "\n student 4 max marks : " << st4.max(45,55,65) << endl;
}
