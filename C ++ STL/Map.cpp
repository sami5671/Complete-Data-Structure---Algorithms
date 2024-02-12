#include<iostream>
#include<map>

using namespace std; 

int main(){

    map<int, string > m;

    m[1] = "Sami";
    m[13] = "Alam";
    m[2] = "Rony";
    m[89] = "Ahmed";

    cout<< "Before Erase: "<< endl;


    m.insert({5, "FOOO"});

    for (auto i: m)
    {
        cout<< i.first << " " << i.second << endl;
    }

    cout<< "After Erase: "<< endl;
    m.erase(13);

    for (auto i: m)
    {
        cout<< i.first << " " << i.second << endl;
    }


    cout<< "Finding 12: "<< m.count(12)<< endl;  //false
    cout<< "Finding 2: "<< m.count(2)<< endl;  //true


// finding from specific element and print

cout << "Printing from 2 to End: ";

    auto it = m.find(2);

    for (auto i =it; i!= m.end(); i++)
    {
       cout << (*i).first << " ";
    }
    
    


    
    return 0;
}