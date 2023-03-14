// Benefits
// - Random access memory is avaiable
// - it is dynamic Array,we can store the array elements
// - we can incease the size of the vector dynamic

// methods - push_back(),pop_back(),size()
// capacity(),at().front(),back(),clear()


#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    // insert the element into the vector
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);
    v.push_back(14);
    v.push_back(15);
    // print the vector element's
    for( auto i : v){
        cout << i << " ";
    }
     cout << endl;
    // pop the element into the vector
    v.pop_back();
    v.pop_back();

    cout << endl;
     // print the vector element's
    for( auto i : v){
        cout << i << " ";
    }
    cout << endl;

    cout << "size of the vector :: " << v.size();
    cout << endl;
    cout << "capacity of the vector :: " << v.capacity();
    cout << endl;
    cout << "front element of the vector " << v.front();
    cout << endl;
    cout << "back element of the vector " << v.back();
    cout << endl;

    // Case 1 : ( 1D Array )
    vector<int>arr (5,1);

    for(auto it: arr){
        cout << it << " ";
    }
    cout << endl;
    
    // Case 2 : ( 2D Array ) 
    int n = 4;
    int m = 4;
    vector<vector<int>> dis(n,vector<int>(m,55));

    for(int i = 0; i<n; i++){
        for(int j= 0; j< m; j++){
            cout << dis[i][j] << " ";
        }
    }
    return 0;
}
