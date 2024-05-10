#include<iostream>
using namespace std;
int main(){

    int a, b, option;
    cout<< "Enter the value of a & b: ";
    cin>>a >> b;

    cout<< "Which case would you like to do:\n\n1.Addition\n2.Subtract\n3.Multiply\n4.Divide\n5.Modulas: ";
    cin>>option;

    cout<< endl;

    switch (option)
    {
    case 1:
       cout<< "Addition of "<< a << " And " << b << " is: "<< a + b << endl;
        break;
    case 2:
        cout<< "Subtraction of "<< a << " And " << b << " is: "<< a - b << endl;
        break;
    case 3:
        cout<< "Multiplication of "<< a << " And " << b << " is: "<< a * b << endl;
        break;
    case 4:
        cout<< "Division of "<< a << " And " << b << " is: "<< a / b << endl;
        break;
    case 5:
        cout<< "Modals of "<< a << " And " << b << " is: "<< a % b << endl;
        break;
    
    default:
        cout<< "Enter a valid option"<< endl;
        break;
    }

    return 0;
}