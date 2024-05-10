#include<iostream>
using namespace std;


char getMaximumOccurring(string s){

    int arr[26] = {0};
    // create array of count of characters
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    // find maximum occurring character
    int maximum = -1 , ans = 0;
    for (int i = 0; i < 26; i++)
    {
       if (maximum < arr[i])
       {
            ans = i;
            maximum = arr[i];
       }
       
    }
    
    char finalAns = 'a' + ans;
    return finalAns;
    
}

int main(){

    string s;
    cin >> s;

    cout << getMaximumOccurring(s) << endl;

    return 0;   
}