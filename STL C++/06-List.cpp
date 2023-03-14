#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> ls;
    ls.push_back(11);
    ls.push_back(12);
    ls.push_front(12);

    for(auto it: ls){
        cout << it << " ";
    }

    // all the methods are same to deque

    return 0;
}