#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v;
    cout<< "Capacity: "<< v.capacity() << endl;

    v.push_back(10);
    cout<< "Capacity: "<< v.capacity() << endl;

    v.push_back(20);
    cout<< "Capacity: "<< v.capacity() << endl;

    v.push_back(30);
    cout<< "Capacity: "<< v.capacity() << endl;

    cout<< "Size: " << v.size() << endl;
    cout<< "Value in Index 2 is: "<< v.at(2) << endl;

}