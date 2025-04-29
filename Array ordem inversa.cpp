#include <stdio.h>
#include <stdlib.h>
int main (){
    int num[5], i;
    printf("Informe 5 numeros inteiros:\n ");
    for (i=0; i<5; i++){
    scanf("%d", &num[i]);
    }
    printf("Os numeros na ordem inversa ficam:\n");
    for (i=4; i>=0; i--){
    printf("%d ", num[i]);
    }
    return 0;
}