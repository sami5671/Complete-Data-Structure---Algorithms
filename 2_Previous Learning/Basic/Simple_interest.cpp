#include<iostream>
using namespace std;

int main(){
    
    double principal, rateOfInterest, time, result;
    cout<< "Enter the value of principal, rateOfInterest, time: ";
    cin>> principal >> rateOfInterest >> time;

    result = (principal*rateOfInterest*time)/100;
    cout<<"The Simple interest is: " << result << "%"<< endl;

    return 0; 
}