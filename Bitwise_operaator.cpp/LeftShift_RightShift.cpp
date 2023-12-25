#include<iostream>
using namespace std;
int main(){

    int n;
    cout<< "Enter the number you want to Left Shift 1 and 2: ";
    cin>>n;

    cout << "Left shift of 1 time: " << (n<<1)<<endl;
    cout<< "Left shift of 2 time: " << (n<<2)<<endl;


    cout<< "Enter the number you want to Right Shift 1 and 2 time: ";
    cin>>n;

    cout << "Right shift of 1 time: " << (n>>1)<<endl;
    cout<< "Right shift of 2 time: " << (n>>2)<<endl;



    return 0;
}