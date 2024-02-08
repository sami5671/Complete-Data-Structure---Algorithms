#include<iostream>
#include<deque>

using namespace std;

int main(){

    deque<int> d;

    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_back(40);

    cout<< "After deque the elements: ";
    for (int i: d)
    {
        cout << i << " ";
    }
     cout<< endl;

    // d.pop_front();

    cout<< "After pop back the elements: ";
    for (int i: d)
    {
        cout << i << " ";
    }
    cout<< endl;

    cout<< "Print 2nd Index Element: " << d.at(1) << endl;

    cout<< "Front element is: "<< d.front()<< endl;
    cout<< "Back element is: "<< d.back()<< endl;

    cout<< "Empty or not: "<< d.empty()<< endl;

    cout << "Before erase: " << d.size()<< endl;
    d.erase(d.begin()+ 1, d.begin()+2);
    cout<< "After erase: "<< d.size()<< endl;

    for (int i: d)
    {
        cout << i << " ";
    }

    return 0;
}