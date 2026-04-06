#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
	stack<int> st1;
	stack<int> st2;
	int e,f,s1,s2;
	cout << "Enter size of first stack : ";
	cin >> s1;
	cout << "Enter Elements of first stack : ";
	for(int i=1;i<=s1;i++){
		cin >> e;
		st1.push(e);  
	}
	cout << "Enter size of second stack : ";
	cin >> s2;
	cout << "Enter Elements of second stack : ";
	for(int i=1;i<=s2;i++){
		cin >> f;
		st2.push(f);  
	}
	if(st1.size()!=st2.size()){
		cout << " The Stacks Are Not Equal!! \n";
		return 0;
	}
	else
		cout << "The Stack Sizes are Same.\n";
	while(st1.size()!= 0){
		if(st1.top() != st2.top()){
			cout << "The Stacks Are Not Equal \n";
		}
		st1.pop();
		st2.pop();
	}
	if(st1.size() == 0 && st2.size()==0){
		cout << "The Stacks Are Equal \n";
	}
	return 0;
}
