// Vector is a Dynamic Array...

#include<iostream>
#include<vector>

using namespace std;

int main() {

    vector<int> v;
    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(4);
    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(5);
    cout << "Capacity: " << v.capacity() << endl;

    cout << "Element at index 2: " << v.at(2) << endl;

    cout << "First Element is: " << v.front() << endl;
    cout << "Last Element is: " << v.back() << endl;
}
