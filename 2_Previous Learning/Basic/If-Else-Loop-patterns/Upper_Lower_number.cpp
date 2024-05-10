

#include<iostream>
using namespace std;

int main(){
    int ascii;
    char ch;
    cout<< "Enter a character or number or special character: ";
    cin>> ch;

    if (ch >= 65 && ch <= 90)
    {
        cout<< ch << " "  << "is Uppercase." << endl;
    }else if (ch >= 97 && ch <= 122)
    {
       cout<< ch << " " << "is Lowercase." << endl;
    }else if (ch >= 48 && ch <= 57)
    {
        cout<< ch << " " << "is a number"<< endl;
    }else{
        cout<< ch << " " << "is a special character." << endl;
    }


    return 0;
}