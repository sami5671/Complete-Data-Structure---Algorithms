#include<iostream>
#include<conio.h>
using namespace std;
int main(){

    int a,b, answer = 1;
    cout<< "Enter a and b for get(a^b): ";
    cin>>a>>b;

    for (int i = 0; i < b; i++)
    {
        answer = answer * a;
    }
    cout<< "Power is: "<<  answer << endl;


    getch();
}