#include<iostream> 
using namespace std;
int main(){

    int num;
    cout<< "Enter the case(1/2/3): ";
    cin>>num;

   while (1)
   {
     switch (num)
    {
    case 1:
        cout<< "Case 1"<<endl;
        exit(0);
    case 2:
        cout<< "Case 2"<<endl;
        exit(0);
    case 3:
        cout<< "Case 3"<<endl;
        exit(0);
    
    default:
        cout<< "Default"<<endl;
        break;
    }
   }
   

    return 0;
}