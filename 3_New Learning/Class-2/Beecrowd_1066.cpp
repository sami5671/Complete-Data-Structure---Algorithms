#include<iostream>
using namespace std;

int main(){

    int n;
    int pos = 0, neg = 0, even = 0, odd = 0;



    for(int i = 0; i < 5; i++){

        scanf("%d", &n);

        if(n%2 == 0){
            even++;
        }else{
            odd++;
        }

        if(n>0){
            pos++;
        }else if(n<0){
            neg++;
        }
    }

    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);

    printf("%d valor(es) negativo(s)\n", neg);
    printf("%d valor(es) positivo(s)\n", pos);



}


