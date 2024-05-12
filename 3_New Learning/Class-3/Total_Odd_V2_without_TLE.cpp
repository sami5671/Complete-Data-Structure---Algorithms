
#include <bits/stdc++.h>
using namespace std;

int main() {

	int L, R;
	int T;
	scanf("%d", &T);


    while(T--){


    scanf("%d %d", &L, &R);

    int firstOdd = (L %2 == 0)? L+1 : L;
    int lastOdd = (R %2 == 0)? R-1: R;


    int count = (lastOdd - firstOdd) / 2+1;
    printf("%d\n", count);


    }
}

