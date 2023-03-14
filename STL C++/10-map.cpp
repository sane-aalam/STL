#include <iostream>
#include <map>
using namespace std;

int main(){

    map<int,int> mp;
    mp[0] = 11;
    mp[1] = 12;
    mp[2] = 13;

    for(auto it: mp){
        int key = it.first;
        int value = it.second;
        cout << "print the key " << key << endl;
        cout << "print the value " << value << endl;
        cout << endl;
    }

    // there are diffent methods are - cout(),find(),size(),erase()

    return 0;
}