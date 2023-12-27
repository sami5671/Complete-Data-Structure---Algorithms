#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

//======== function for power ============
int power(){

    int a, b;
    cout<< "Enter a and b: ";
    cin>>a>>b;

    int ans = 1;
    ans = pow(a, b);

    return ans;   
}

// =======================================


int main(){

    int answer1 = power();
    cout<< "Power is: "<< answer1 << endl;

    int answer2 = power();
    cout<< "Power is: "<< answer2 << endl;


    getch();
}