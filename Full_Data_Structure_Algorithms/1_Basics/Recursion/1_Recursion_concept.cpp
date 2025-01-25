#include <bits/stdc++.h> 
using namespace std;
int cnt = 0;

void print_number(){
    if (cnt == 3)
    {
        return;
    }
    cout << cnt << endl;
    cnt++;
    print_number();
}
int main(){
    print_number();
    return 0;
}