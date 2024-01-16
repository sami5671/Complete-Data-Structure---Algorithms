#include<bits/stdc++.h>
using namespace std;


int dataTypes(string type) {
	// Write your code here
	
    if(type == "Integer"){
		return sizeof(int);
	}else if (type == "Long"){
		return sizeof(long);
	}
	else if (type == "Float"){
		return sizeof(float);
	}
	else if (type == "Double"){
		return sizeof(double);
	}
	else if (type == "Character"){
		return sizeof(char);
	}
}


int main(){

    string str;
    cin>> str;

    int size =  dataTypes(str);
    cout << size << endl;
    return 0;
}