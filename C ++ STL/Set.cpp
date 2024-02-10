#include<iostream>
#include<set>

using namespace std;    

int main(){

    set<int> s;
    
    s.insert(5);
    s.insert(100);
    s.insert(6);
    s.insert(0);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);


// it will not take any duplicate data
    for (int i: s)
    {
        cout << i << " ";
    }

    cout<< endl;

    cout<< "100 is present or not: " << s.count(100) << endl;

    set<int>::iterator it = s.end();
    it++;

    s.erase(it);

    for (int i: s)
    {
        cout << i << " ";
    }

 cout<< endl;
     cout<< "100 is present or not: " << s.count(100) << endl;
}