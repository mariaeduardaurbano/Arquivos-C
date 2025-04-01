#include <stdio.h>
#include <locale.h>

int main(){
   int num, qnt, soma = 0, i;
    printf("Informe a quantidade de números que deseja somar:\n");
    scanf("%d", &qnt);
    
    for (i = 0; i < qnt; i++)
    {
        printf("Informe os números:\n");
        scanf("%d", &num);
     while (num < 0) {
        printf ("Número negativo! Digite um número positivo:\n");
        scanf("%d", &num);
    }
    soma += num;
    }
    printf("A soma dos números é de: %d\n", soma);
    return 0;
}