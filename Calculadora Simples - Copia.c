#include <stdio.h>
#include <locale.h>
//Inicio
int main(){
    setlocale(LC_ALL,"");
    int opcao;
    float n1, n2, conta;
    printf("Selecione a operação:\n");
    printf("1- Soma\n");
    printf("2- Subtração\n");
    printf("3- Multiplicação\n");
    printf("4- Divisão\n");
    scanf("%d",&opcao);
    
     switch(opcao){
        case 1:
        printf("Você escolheu a operação de Soma!\n");
        printf("Digite os números desejados:\n");
        scanf("%f %f", &n1, &n2);
        conta = n1 + n2;
        printf(" O resultado é: %.2f\n", conta);
        break;
        
        case 2:
        printf("Você escolheu a operação de Subtração!\n");
        printf("Digite os números desejados:\n");
        scanf("%f %f", &n1, &n2);
        conta = n1 - n2;
        printf(" O resultado é: %.2f\n", conta);
        break;
        
        case 3:
        printf("Você escolheu a operação de Multiplicação!\n");
        printf("Digite os números desejados:\n");
        scanf("%f %f", &n1, &n2);
       conta = n1 * n2;
       printf(" O resultado é: %.2f\n", conta);
        break;
        
        case 4:
         printf("Você escolheu a operação de Divisão!\n");
        printf("Digite os números desejados:\n");
        scanf("%f %f", &n1, &n2);
        conta = n1 / n2;
       printf(" O resultado é: %.2f\n", conta);
        break;
        
        default:
        printf("Essa opção é inválida =( Programa encerrado");
        return 1;
    }
    return 0;
}
