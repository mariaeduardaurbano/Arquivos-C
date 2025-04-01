#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
//Inicio
int main(){
    int num;
 
    do{
       printf("Digite um número:");
            scanf("%d", &num);
            }while (num != 7);
            printf("Saindo...");
    return 0;
}