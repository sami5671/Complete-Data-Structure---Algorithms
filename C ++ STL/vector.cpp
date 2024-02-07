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
    cout<< "First element: "<< v.front()<< endl;
    cout<< "Last element: "<< v.back()<< endl;

    cout<< "Before Pop: "<< endl;
    for (int i:v)
    {
        cout<< i << " ";
    }
    cout << endl;

    v.pop_back();

    cout<< "After Pop: "<< endl;
     for (int i:v)
    {
        cout<< i << " ";
    }
    cout << endl;

    



}