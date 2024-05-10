#include<iostream>
using namespace std;  
int a, b, c, d, e, f;

int fn(int n) {
    if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;
    if (n == 3) return d;
    if (n == 4) return e;
    if (n == 5) return f;
    return (fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6)) % 10000007;
}

int main() {
    int cases, n;
    cin >> cases; // Read the number of test cases
    for (int caseno = 1; caseno <= cases; ++caseno) {
        cin >> a >> b >> c >> d >> e >> f >> n; // Read values for a, b, c, d, e, f, and n
        cout << "Case " << caseno << ": " << fn(n) << endl; // Output the result for the current test case
    }
    return 0;
}
