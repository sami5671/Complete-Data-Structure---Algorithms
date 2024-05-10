#include<iostream>
using namespace std;

string Reverse_String(string text){

        int length = text.length();
        int start = 0;
        int end = length -1;

        while(start < end){

            swap(text[start], text[end]);
            start++;
            end--;
        }

        return text;
}

int main(){

    string text = "sami";
    string result = Reverse_String(text);   
    cout<< result << endl;

    return 0;
}