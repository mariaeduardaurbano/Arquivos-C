#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
//Inicio
int main(){
    setlocale(LC_ALL,"");
    int opcao;
    float valor, res;
    
    do{
        //exibe o menu
         printf("\n--- Conversões ---\n");
        printf("1 - Quilômetros para milhas\n");
        printf("2 - Celsius para Fahrenheit\n");
        printf("3 - Quilogramas para libras\n");
        printf("4 - Metros para centímetros\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);
        
        switch(opcao){
            case 1: 
            printf("Digite o valor para a conversão:\n");
                scanf("%f", &valor);
                res = valor * 0.621371;
                printf("Resultado: %.2f\n", res);
                break;
            case 2:
                printf("Digite o valor para a conversão:\n");
                scanf("%f", &valor);
                res = valor * 1.8 + 32;
                printf("Resultado: %.2f\n", res);
                break;
            case 3:
                printf("Digite o valor para a conversão:\n");
                scanf("%f", &valor);
                res = valor * 2.20462;
                printf("Resultado: %.2f\n", res);
                break;
            case 4:
            printf("Digite o valor para a conversão:\n");
                scanf("%f", &valor);
                res = valor * 100;
                printf("Resultado: %.2f\n", res);
                break;
            case 0:
            printf("Saindo...");
             break;
            default:
            printf("Opção inválida =( tente novamente!\n");
        }
    }while (opcao != 0);
    return 0;
}