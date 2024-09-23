#include<iostream>
#include<bits/stdc++.h>
#include<stack>

using namespace std;

void explainStack(){
    stack<int> st ; 

    st.push(3);
    st.push(8);

    cout << "Size is : " << st.size() << endl;

// we can't use iterator concept to print all the elements, the only  possible way is print the element and pop it out and repeat it using while loop
    // for(auto it:st)
        // cout << it  << " ";

    // cout << st.top() << endl;
    // st.pop();
    // cout << st.top() << endl;
    // imagine while popping out elements, the elements in stack become zero, and you still pop out the element and try to print it,  in that case no output will be shown, becuase the program will show RUNTIME ERROR

cout << "Elements of stack are " << endl;
// while(st.empty() == false){
while(!st.empty()){
    cout << st.top() << " " ;
    st.pop();
}

}


int main (){
    explainStack();
    return 0;
}   