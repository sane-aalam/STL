#include <iostream>
#include <array>
using namespace std;

int main(){
    array<int,4> arr = {1,2,3,553};

    int sizeArray = arr.size();
    cout << "print the size of array :" << sizeArray << endl;

    for(int i = 0; i<4; i++){
        cout << arr[i] << " ";
    }

    cout << "access the element ::" << arr[0] << endl;
    cout << "checkout the array is empty or NOT ::" << arr.empty() << endl;
    cout << "if we want to access the front element of the array ::" << arr.front() << endl;
    cout << "if we want to access the last element of the array ::" << arr.back() << endl;

    return 0;
}