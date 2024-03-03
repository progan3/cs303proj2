using namespace std;
#include <iostream>
#include <vector>

class Stack {
private:
    vector<int> stack;

public:
    Stack() {}

    bool isEmpty() const {
        return stack.empty();
    }

    void push(int value) {
        stack.push_back(value);
    }

    void pop() {
        if (!isEmpty()) {
            stack.pop_back();
        }
    }

    int top() const {
        if (!isEmpty()) {
            return stack.back();
        }
        throw out_of_range("Stack is empty");
    }

    double average() const {
        if (isEmpty()) {
            throw out_of_range("Stack is empty");
        }

        double sum = 0;
        for (int value : stack) {
            sum += value;
        }

        return sum / stack.size();
    }
};

int main() {
    Stack myStack;
    cout << "Is the stack empty? " << (myStack.isEmpty() ? "Yes" : "No") << endl;
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    cout << "Is the stack empty? " << (myStack.isEmpty() ? "Yes" : "No") << endl;
    cout << "Top value: " << myStack.top() << endl;
    myStack.pop();
    cout << "Top after removal " << myStack.top() << endl;
    cout << "Average: " << myStack.average() << endl;
}



