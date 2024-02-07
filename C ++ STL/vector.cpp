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

    
    // clear data on the vector 
    v.clear();
    cout << "After Clear the size is: "<< v.size() << endl; // size will 0
    cout << "After Clear the Capacity is: "<< v.capacity() << endl; //capacity will not change


    // Initializing The vector with size and value 1
    vector<int> v1(5, 1); //default value is 0

    cout<< "Initializing The vector with size and value 1: ";
     for (int i:v1)
    {
        cout<< i << " ";
    }
    cout << endl;

    // copy the vector 
     vector<int> copyVector(v1);

    cout<<  "After Copying the vector v1: ";
     for (int i:copyVector)
    {
        cout<< i << " ";
    }
    cout << endl;


}