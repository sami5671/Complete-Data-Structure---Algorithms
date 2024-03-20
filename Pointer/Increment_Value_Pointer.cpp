#include<iostream>
using namespace std;

int main(){

    int num = 10;
    int a = num;

    cout << "A before: " << num << endl;
    a++;
    cout << "A after: " << num << endl;


// pointer
    int *p = &num;
    cout << "before: " << num << endl;

    // increment
    (*p)++;
    cout << "After: " << num << endl;


    // copying a pointer
    int *q = p;
    cout<< p << " <----> " << q << endl;
    cout<< *p << " <----> " << *q << endl;


    // important concepts 
    int i = 3;
    int *t = &i;

    cout<< *t << endl;
    *t = *t + 1;
    cout<< *t << endl;

    // INCREMENT ADDRESS 
    cout<< "ADDRESS BEFORE: " << t << endl;
    t = t + 1;
    cout<<  "ADDRESS AFTER: " << t << endl;

    return 0;
}
