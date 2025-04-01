#include <stdio.h>
#include <locale.h>
//Inicio
int main(){
    setlocale(LC_ALL,"");
    int opcao;
    printf("Selecione uma opção em nosso menu:\n");
    printf("1- X-Burguer\n");
    printf("2- X-Salada\n");
    printf("3- X-Bacon\n");
    printf("4- Hotdog\n");
    printf("5- Refrigerante\n");
    scanf("%d",&opcao);
    
     switch(opcao){
        case 1:
        printf("Você escolheu o X-Burguer! Ele está saindo por: R$10.00! :D\n");
        break;
        
        case 2:
        printf("Você escolheu o X-Salada! Ele está saindo por: R$12.00! :D\n");
        break;
        
        case 3:
        printf("Você escolheu o X-Bacon! Ele está saindo por: R$15.00! :D\n");
        break;
        
        case 4:
        printf("Você escolheu o Hotdog! Ele está saindo por: R$8.00! :D\n");
        break;
        
        case 5:
        printf("Você escolheu o Refrigerante! Ele está saindo por: R$5.00! :D\n");
        break;
        
        default:
        printf("Essa opção é inválida :( Programa encerrado");
        return 1;
     }
     return 0;
}