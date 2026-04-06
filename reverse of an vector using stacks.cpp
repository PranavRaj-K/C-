#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void reverseVector(vector<int>& vec) {
    stack<int> st;
    for (int i = 0; i < vec.size(); ++i) {
        st.push(vec[i]);
    }
    for (int i = 0; i < vec.size(); ++i) {
        vec[i] = st.top();
        st.pop();
    }
}

int main() {
    vector<int> v1;
    for(int i =1 ; i<=5;i++){
    	v1.push_back(i);
	}

    cout << "Original Vector: ";
    for (int val : v1) {
        cout << val << " ";
    }
    cout << endl;

    reverseVector(v1);

    cout << "Reversed Vector: ";
    for (int val : v1) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
