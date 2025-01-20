#include<iostream>
using namespace std;

void pattern_1(int n){

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }  
}

void pattern_2(int n){
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern_3(int n){
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}

void pattern_4(int n){
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << row << " ";
        }
        cout << endl;
    }
}

void pattern_5(int n){
    for (int row = n; row > 0; row--)
    {
        for (int col = 0; col < row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){

    int n;
    cin>> n;
    pattern_5(n);
}