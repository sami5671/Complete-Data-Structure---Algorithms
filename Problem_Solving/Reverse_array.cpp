#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse_array(vector<int> v){

    int start = 0;
    int end = v.size() - 1;

   for (int start = 0; start < end; start++, end--)
   {
     swap(v[start], v[end]);
   }
    return v;
}

void print_array(vector<int> v){

    for (int i = 0; i < v.size(); i++)
    {
        cout<< v[i] << " ";
    }
}

int main (){

    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(40);
    v.push_back(30);
    v.push_back(50);


    cout<< "Original Array: ";
    print_array(v);

    cout<< endl;
    cout<< "Reversed Array: ";
    vector<int> reverse = reverse_array(v);
    print_array(reverse);

    return 0;
}