#include <bits/stdc++.h>
using namespace std;


// find GCD
vector<int> find_gcd(int n1, int n2){
    vector<int> result;

    while(n1 > 0 && n2 > 0){
            if(n1 > n2){
                n1 = n1 - n2;
                n2 = n2;
            }else{
                n2 = n2 - n1;
                n1 = n1;
            }
        }

        if (n1 == 0)
        {
            result.push_back(n2);
        }else{
            result.push_back(n1);
        } 
        return result;      
}
// find LCM
vector<int> LCM_find(int n1, int n2){
    vector<int> lcm;
    vector<int> gcd_result = find_gcd(n1, n2);
    int gcd = gcd_result[0];

    lcm = {(n1*n2) / gcd};

    return lcm;
}

int main(){

    int n1, n2;
    cin >> n1 >> n2;
    vector<int> result = LCM_find(n1, n2);
    cout << result[0] << endl;
}