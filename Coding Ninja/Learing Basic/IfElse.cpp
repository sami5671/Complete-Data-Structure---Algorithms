#include<bits/stdc++.h>
using namespace std;

string compareIfElse(int a, int b) {
	// Write your code here
    if (a > b) 
    {
        return "greater";
    }else if (a < b)
    {
         return "smaller";
    }else{
         return "equal";
    }
    
}

int main(){

   int x,y;
   cin>>x>>y;
    
   string compare =  compareIfElse(x,y);
   cout<< compare << endl;
    return 0;
}