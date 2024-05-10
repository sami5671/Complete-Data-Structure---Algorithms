#include <bits/stdc++.h>
using namespace std;

int main(){

    int note;
    int note_count;

    scanf("%d", &note);
    printf("%d\n", note);

    note_count = note / 100;
    note = note % 100;
    printf("%d nota(s) de R$ 100,00\n", note_count);

    note_count = note / 50;
    note = note % 50;
    printf("%d nota(s) de R$ 50,00\n", note_count);

    note_count = note / 20;
    note = note % 20;
    printf("%d nota(s) de R$ 20,00\n", note_count);

    note_count = note / 10;
    note = note % 10;
    printf("%d nota(s) de R$ 10,00\n", note_count);

    note_count = note / 5;
    note = note % 5;
    printf("%d nota(s) de R$ 5,00\n", note_count);

    note_count = note / 2;
    note = note % 2;
    printf("%d nota(s) de R$ 2,00\n", note_count);

    note_count = note / 1;
    note = note % 1;
    printf("%d nota(s) de R$ 1,00\n", note_count);


}
