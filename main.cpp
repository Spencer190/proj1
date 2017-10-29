#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
using std::replace;
using std::max_element;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main() {
   
    vector<int> v1 {5,6,7,8,5,8,8};
    vector<char> v2 {'a','b','c','a','d','s','g'};
    vector<int> v3 {};
    
    cout << "v1: ";
    for(int x : v1)
        cout << x << " ";
    cout << endl;
    
    cout << "v2: ";
    for(char x : v2)
        cout << x << " ";
    cout << endl;
    
    replace(v1.begin(), v1.end(), 8, 12);
    
    cout << "v1: ";
    for(int x : v1)
        cout << x << " ";
    cout << endl;
    
    replace(v2.begin(), v2.end(), 'a', 'b');
    
    cout << "v2: ";
    for(char x : v2)
        cout << x << " ";
    cout << endl;
    
    auto max1 = max_element(v1.begin(), v1.end());
    cout << "Max element in v1 is " << *max1 << endl;
    
    auto max2 = max_element(v2.begin(), v2.end());
    cout << "Max element in v2 is " << *max2 << endl;

    cout << "v3 is empty" << endl;
    auto max3 = max_element(v3.begin(), v3.end());
    if(max3 == v3.end()){
    cout << "Max element in v3 is non-existent" << endl;
    }
    
    return 0;
}
