#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(9);
    v.push_back(0);
    v.push_back(3);


    cout << "Finding 3: "<< binary_search(v.begin(), v.end(), 3)<< endl;

    cout << "Lower Bound: "<< lower_bound(v.begin(), v.end(), 3)- v.begin()<< endl;
    cout << "Upper Bound: "<< upper_bound(v.begin(), v.end(), 1)- v.begin()<< endl;

    int a = 5;
    int b = 10;

    cout << "Max: "<< max(a, b)<< endl;
    cout << "Min: "<< min(a, b)<< endl;


    swap(a, b);
    cout<< "After Swapping a = "<< a  << " b = "<< b << endl;

    string s = "imas";
    reverse(s.begin(), s.end());
    cout<< "After Reversing the string: "<< s << endl;



    cout<< "Before Rotating: ";
    for(auto i:v) {
    cout<< i << " ";
    }

cout << endl;

    rotate(v.begin(), v.begin()+ 1, v.end());
    cout<< "After Rotating: ";

    for(auto i:v) {
        cout<< i << " ";
    }

    cout << endl;
    cout << "After Sorting: ";
    
    sort(v.begin(), v.end());
     for(auto i:v) {
        cout<< i << " ";
    }

    return 0; 
}