#include<iostream>
using namespace std;

int count = 0;

void Base_Condition(){
    
    if (count == 5)
    {
        return;
    }
    else{
    cout<< "Count: " << count << endl;
    count++;
    Base_Condition();
    }       
    
}
    
    

int main(){

    Base_Condition();

    return 0;
}