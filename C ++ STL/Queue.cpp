#include<iostream>
#include<queue>

using namespace std;
int main(){

    queue<string> q;

    q.push("sami");
    q.push("sadman");
    q.push("kabir");

    cout<< "Size before pop: "<< q.size()<<endl;
    cout<< "First Element: "<< q.front()<<endl;

    q.pop();

    cout<< "Size After pop: "<< q.size()<<endl;
    cout<< "First Element: "<< q.front()<<endl;

    return 0;

}