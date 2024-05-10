#include<iostream>
using namespace std; 

void valid_triangle(int a, int b, int c){
    if (a+b>c && b+c>a && c+a>b)
    {
        cout<< "Triangle is valid"<<endl;
    }else{
        cout<< "Triangle is not valid"<<endl;
    }
    
}

int main(){
    int a,b,c;
    cout<< "Enter the number: "<< endl;
    cin>> a >> b >> c;
    valid_triangle(a,b,c);

    return 0;
}