//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int reverseExponentiation(int n) {
        // code here
        int revNumber = 0;
        int lastDigit, result;
        int originalNumber = n;
        
        if(n >= 1 && n <= 10){
            while(n != 0){
            lastDigit = n % 10;
            n = n / 10;
            revNumber = (revNumber * 10) + lastDigit;
        }
        // find power of own reverse
         result = pow(originalNumber, revNumber);
        }else{
            return 0;
        }
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T; // test cases

    while (T--) {
        int n;
        cin >> n; // input N

        Solution ob;
        // power of the number to its reverse
        int ans = ob.reverseExponentiation(n);
        cout << ans << endl;
    }

    return 0;
}