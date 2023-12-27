#include<iostream>
#include<conio.h>
using namespace std;

//======== function for power ============
int power(int x, int y){

    int ans = 1;
    for (int i = 0; i < y; i++)
    {
        ans = ans * x;
    }
    return ans;   
}

// =======================================


int main(){

    int a, b;
    cout<< "Enter a and b: ";
    cin>>a>>b;

    int answer = power(a, b);
    cout<< "Power is: "<< answer << endl;
    getch();
}