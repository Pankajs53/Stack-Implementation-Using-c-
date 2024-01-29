#include <iostream>
using namespace std;
#include<stack>

// Implementation of Main Five function used in Stack
// 1. pop 2. top 3. isempty 4. size 5. push

int main(){
    // creating  a stack of int type
    stack<int>st;

    // add data
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    // to get the topMost Value
    cout <<"TopMost Value is " <<  st.top() << endl;

    // to remove the top value
    st.pop();

    // to get the topMost Value
    cout <<"TopMost Value is " <<  st.top() << endl;

    // to check stack size
    cout <<"Size of Stack is " <<  st.size() << endl;

    // function to check stack is empty or not
    if(st.empty()){
        cout << "Stack is empty";
    }else{
        cout << "Stack is not empty"; 
    }

    return 0;
}