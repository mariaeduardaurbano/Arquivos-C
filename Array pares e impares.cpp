#include <stdio.h>
#include <stdlib.h>
int main (){
    int num [8], par, impar, i;
    printf("Digite 8 numeros inteiros:\n");
    for (i=0; i<8; i++){
        scanf("%d", &num[i]);
        if (num[i] %2 == 0){
            par++;
        }
        else {
            impar++;
        }
    }
    printf("Número pares: %d\n", par);
    printf("Número ímpares: %d\n", impar);
    return 0;
}