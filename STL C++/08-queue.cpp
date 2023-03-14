#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// node - first in,last out 

int main(){
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(23);
    q.push(34);
    q.push(55);
    q.push(53);
    q.push(124);

    cout << q.front() << endl;
    cout << q.size() << endl;
    cout << q.back() << endl; 

    int value = q.front();
    q.pop();

    cout << "print the poped value :: " << value << endl;

    vector<int> result;

    while(!q.empty()){
        int element = q.front();
        q.pop();
        result.push_back(element);
    }

    return 0;
}