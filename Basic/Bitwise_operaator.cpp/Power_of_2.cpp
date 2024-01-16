#include<iostream>
#include<math.h>

using namespace std;

int powerOfTwo(int x) {

    int ans;
    for (int i = 0; i <= 30; i++)
    {
        ans = pow(2,i);
        if (ans == x)
        {
            return 1;
        }
    }
    return 0;
    
}
int main(){

    int number;
    cout<< "Enter A  number: ";
    cin >> number;

    int result = powerOfTwo(number);
    if (result == 1)
    {
       cout<< "yes"<< endl;
    }else{
        cout<< "no"<< endl;
    }
    

    return 0;
}