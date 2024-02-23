#include<iostream>
using namespace std;

string Reverse_String(string text){

    int length = text.length();
    int start = 0;
    int end = length -1;

    while (start < end)
    {
        swap(text[start], text[end]);
        start++;
        end--;
    }

    return text;
}

bool Check_Palindrome(string OriginalText){
    
    string reverse_text = Reverse_String(OriginalText);
    
    if (OriginalText == reverse_text)
    {
        return true;
    }
        return false;
}

int main(){

    string text;
    cin >> text;
    
    if (Check_Palindrome(text))
    {
       cout << "String is Palindrome" << endl;
    }else{
        cout << "Not Palindrome" << endl;
    }

    return 0;
}