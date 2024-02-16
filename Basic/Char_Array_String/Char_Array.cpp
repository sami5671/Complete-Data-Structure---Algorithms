#include<iostream>
using namespace std;

void reverse(char arr[], int size){
    int s = 0;
    int e = size - 1;
    while (s<e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }

}

int getLength(char arr[]){
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
    
}

int main(){

    char name[20];

    cout << "Enter your name: ";
    cin >> name;

    // name[2] ='\0';

    cout << "Your name is: "<< name << endl;


    int length = getLength(name);
    cout<< "Length: "<< length << endl;

    reverse(name, length);
    cout<< "Reversed Name is: " << name << endl;

    return 0;
};