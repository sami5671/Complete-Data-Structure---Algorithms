#include<iostream>
using namespace std;
int main(){ 

    int number, option;
    cout<< "Enter the number: ";
    cin >> number;
    cout<< "Enter option:\n\n1. 100 Notes\n2. 20 Notes\n3. 10 Notes: ";
    cin>>option;


    switch (option)
    {
    case 1:
        cout<< "100 Notes of " << number << " are: " << number / 100 << endl;
        break;
    case 2:
        cout<< "20 Notes of " << number << " are: " << number / 20 << endl;
        break;
    case 3:
        cout<< "10 Notes of " << number << " are: " << number / 10 << endl;
        break;
    
    default:
        cout<< "Enter a valid option" << endl;
        break;
    }



    return 0;
}