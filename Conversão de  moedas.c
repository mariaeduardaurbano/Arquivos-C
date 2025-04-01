#include <stdio.h>
#include <locale.h>
//Inicio
int main(){
    setlocale(LC_ALL,"");
    int opcao;
    float valor, conv;
    printf("Selecione uma moeda para a conversão:\n");
    printf("1- Dólar\n");
    printf("2- Euro\n");
    printf("3- Libra\n");
    scanf("%d",&opcao);
    
     switch(opcao){
        case 1:
        printf("Você escolheu Dólar!\n");
        printf("Digite o valor desejado para a conversão:\n");
        scanf("%f", &valor);
        conv = valor * 0.17;
        printf(" O resultado é: %.2f\n", conv);
        break;
        
        case 2:
        printf("Você escolheu Euro!\n");
        printf("Digite o valor desejado para a conversão:\n");
        scanf("%f", &valor);
        conv = valor * 0.16;
        printf(" O resultado é: %.2f\n", conv);
        break;
        
        case 3:
        printf("Você escolheu Libra!\n");
        printf("Digite o valor desejado para a conversão:\n");
        scanf("%f", &valor);
        conv = valor * 0.13;
        printf(" O resultado é: %.2f\n", conv);
        break;
        
          default:
        printf("Essa opção é inválida =( Programa encerrado");
        return 1;
     }
    return 0;
}