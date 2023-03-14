#include <iostream>
#include <set>
using namespace std;

// note - element not repeat ( don't reapt yourself )

int main(){

    set<int> st;
    // insert the elements into the set ):
    st.insert(11);
    st.insert(12);
    st.insert(13);
    st.insert(15);

    cout << st.size() << endl;

    // insert the elements into the set ):
    st.insert(11);
    st.insert(12);
    st.insert(13);
    st.insert(15);

    cout << st.size() << endl;

      // insert the elements into the set ):
    st.insert(61);
    st.insert(12);
    st.insert(63);
    st.insert(15);

    cout << st.size() << endl;

    // cout << st.find() << endl;
    cout << st.count(61) << endl;
    // cout << st.erase() << endl;

    return 0;
}