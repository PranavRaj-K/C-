#include <iostream>
using namespace std;

class StackInterface {
public:
    virtual void push(int x) = 0;
    virtual void pop() = 0;
    virtual int peek() = 0;
};

class Stack : public StackInterface {
    int arr[100];
    int top;

public:
    Stack() { top = -1; }

    void push(int x) override {
        if (top == 99) {
            cout << "Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    void pop() override {
        if (top == -1) {
            cout << "Underflow\n";
            return;
        }
        top--;
    }

    int peek() override {
        if (top == -1) {
            cout << "Empty\n";
            return -1;
        }
        return arr[top];
    }
};

int main() {
    StackInterface* s = new Stack();

    s->push(5);
    s->push(10);
    cout << "Top Element : " << s->peek() << "\ndeleting...\n\n"<< endl;

    s->pop();
    cout << "Top Element : " << s->peek() << "\ndeleting..."<<endl;

    delete s;
    return 0;
}
