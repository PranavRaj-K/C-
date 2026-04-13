#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    vector<int> a={1,2,2,1};
    for( int i = a.size()-1 ; i >=0 ; i--){
        q.push(a[i]);
    }
    for(int i = 0; i< a.size(); i++){
    	if(q.front() != a[i]){
    		cout << "the number is not palindrome";
    		return 0;
		}
		q.pop();
	}
	cout << "The Number Is Palindrome";
	return 0;
}
