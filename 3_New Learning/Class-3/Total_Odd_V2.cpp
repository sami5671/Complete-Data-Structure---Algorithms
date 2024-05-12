#include <bits/stdc++.h>
using namespace std;

int main() {

	int L, R;
	int T;
	scanf("%d", &T);


    while(T--){
        int count = 0;

        scanf("%d %d", &L, &R);

        for(int i = L; i<= R; i++){

        if(i % 2 !=0){

            count++;
        }
    }
    printf("%d\n", count);
    }
}

