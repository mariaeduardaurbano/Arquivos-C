#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
//Inicio
int main(){
    setlocale(LC_ALL,"");
    int opcao;
    float num1, num2, res;
    
    do{
        //Exibe o menu
        printf("\n---- Calculadores Simples ---\n");
        printf("1 - Adição\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);
        
        switch(opcao){
            case 1:
                printf("Digite dois números:\n");
                scanf("%f %f", &num1, &num2);
                res = num1 + num2;
                printf("Resultado: %.2f\n", res);
                break;
            case 2:
                printf("Digite dois números:\n");
                scanf("%f %f", &num1, &num2);
                res = num1 - num2;
                printf("Resultado: %.2f\n", res);
                break;
            case 3:
            printf("Digite dois números:\n");
                scanf("%f %f", &num1, &num2);
                res = num1 * num2;
                printf("Resultado: %.2f\n", res);
                break;
            case 4:
                printf("Digite dois números:\n");
                scanf("%f %f", &num1, &num2);
                if(num2 != 0){
                    res = num1 / num2;
                    printf("Resultado:%.2f\n", res);
                } 
                else{
                    printf("Erro: divisão por zero!\n");
                }
                break;
            case 0:
            printf("Saindo...\n");
            break;
            default:
            printf("Opção inválida =( tente novamente!\n");
        }
    } while (opcao != 0);
    return 0;
}