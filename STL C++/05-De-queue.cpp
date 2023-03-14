#include <iostream>
using namespace std;
#include <deque>

// Note : you can insert/pop the element both side 

int main(){
    deque<int> d;
    d.push_front(11);
    d.push_back(12);
    d.push_front(9);
    d.push_back(33);

    cout << "print the deque -->" << endl;
    for(int i : d){
        cout << i << " ";
    }
    cout << endl;

    // case 1 : 
    d.pop_back();
   cout << "print the deque after the pop element from back -->" << endl;
    for(int i : d){
        cout << i << " ";
    }
    cout << endl;
    
    // case 2 : 
    d.pop_front();
    cout << "print the deque after the pop element from front -->" << endl;
    for(int i : d){
        cout << i << " ";
    }
    cout << endl;

    // case 3 - others pre-define method can be used
    cout << d.front() << endl;
    cout << d.back() << endl;
    cout << d.at(1) << endl;
    cout << d.empty() << endl;
    // cout << d.erase()
    return 0;
}