#include<iostream>
using namespace  std;

char toLowerCase(char ch){
    if (ch>= 'a' && ch<='z')
    {
        return ch;
    }else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool palindrome(char arr[], int size){
    int start = 0;
    int end = size -1;

    while (start < end)
    {
         if(toLowerCase(arr[start]) != toLowerCase(arr[end]))
         {
            return 0;
         }else{
            start++;
            end--;
         }
    }
    return 1;
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

    char word[30];
    cout<< "Enter a word: ";
    cin >> word;

    int size = getLength(word);

    

    if (palindrome (word, size) == 0)
    {
    cout<< "the word is not plindrome"<<endl;
    }else{
     cout<< "the word is plindrome"<<endl;
    }
    

    return 0;
} 