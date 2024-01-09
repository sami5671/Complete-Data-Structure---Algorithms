
#include<bits/stdc++.h>

using namespace std;
int main(){

    char ch;
    cin>> ch;

    // if (ch >= 'A' && ch <= 'Z')
    // {
    //     cout<< "Uppercase";
    // }
    // else if (ch >= 'a' && ch <= 'z'){

    //     cout<< "Lowercase";
    // }
    // else if(ch >= '0' && ch <= '9'){
    //     cout<< "Number";
    // }

    if (isupper(ch))
    {
        cout<< "1";
    }else if(islower(ch))
    {
        cout<< "0";
    }else {
        cout<< "-1";
    }
    
    

    return 0;
}