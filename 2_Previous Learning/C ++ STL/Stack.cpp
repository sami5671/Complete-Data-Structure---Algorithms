#include<iostream>
#include<stack>

using namespace std;

int main(){

    stack<string> s;

    s.push("sami");
    s.push("sadman");
    s.push("kabir");

    cout<< "First Element: "<< s.top()<<endl;

    s.pop();

    cout<< "First Element: "<< s.top()<<endl;

    cout<< "Size of the Stack: "<< s.size()<<endl;

    cout<< "Empty or Not: "<< s.empty()<<endl;

    return 0;

}