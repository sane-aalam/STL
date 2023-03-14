#include <iostream>
#include <stack>
using namespace std;

// node - first in,last out 

int main(){
    stack<int> st;
    st.push(11);
    st.push(23);
    st.push(34);

    cout << st.top() << endl;
    cout << st.size() << endl;
    cout << st.empty() << endl;    

    cout << endl;

    // pop the element into the stack 
    st.pop();
    st.pop();
    cout << st.top() << endl;
    cout << st.size() << endl;
    cout << st.empty() << endl;    

    return 0;
}