#include <iostream>
using namespace std;

class Stack {
public:
    int top;
    int size;
    int* arr;

    // Constructor to initialize the stack with a given size
    Stack(int size) {
        arr = new int[size];
        this->top = -1;
        this->size = size;
    }

    // Destructor to free the dynamically allocated memory
    ~Stack() {
        delete[] arr;
    }

    // Function to push an element onto the stack
    void push(int data) {
        if (top == size - 1) {
            cout << "Stack is full" << endl;
            cout << "Overflow Condition" << endl;
            return;
        }
        top++;
        arr[top] = data;
        cout << "Pushed " << data << " onto the stack" << endl;
    }

    // Function to pop an element from the stack
    void pop() {
        if (top == -1) {
            cout << "Stack Already Empty" << endl;
            cout << "Underflow condition hit" << endl;
            return;
        }
        cout << "Popped " << arr[top] << " from the stack" << endl;
        top--;
    }

    // Function to check if the stack is empty
    bool isempty() {
        return (top == -1);
    }

    // Function to get the topmost element of the stack
    void getTop() {
        if (top == -1) {
            cout << "Stack empty" << endl;
            return;
        }
        cout << "TopMost Value is: " << arr[top] << endl;
    }

    // Function to get the size of the stack
    int getSize() {
        return top + 1;
    }

    // Function to print all elements of the stack
    void print() {
        if (isempty()) {
            cout << "Stack is empty" << endl;
            return;
        }

        cout << "Stack: ";
        for (int i = 0; i < getSize(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    // Create a stack with a size of 5
    Stack st(5);

    // Push some elements onto the stack
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    // Print the stack
    st.print();

    // Get the topmost element
    st.getTop();

    // Push more elements onto the stack
    st.push(50);
    st.push(60);

    // Pop an element from the stack
    st.pop();

    // Print the final state of the stack
    st.print();

    return 0;
}
