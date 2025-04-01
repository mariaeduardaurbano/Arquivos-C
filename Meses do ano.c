#include <stdio.h>
#include <locale.h>
//Inicio
int main(){
    setlocale(LC_ALL,"");
    int num;
    printf("Digite um dia equivalente a um mês do ano (1-12):\n");
    scanf("%d",&num);
    
     switch(num){
        case 1:
        printf("Estamos no mês de Janeiro! :D\n");
        break;
        
        case 2:
        printf("Estamos no mês de Fevereiro! :D\n");
        break;
        
        case 3:
        printf("Estamos no mês de Março! :D\n");
        break;
        
        case 4:
        printf("Estamos no mês de Abril! :D\n");
        break;
        
        case 5:
       printf("Estamos no mês de Maio! :D\n");
        break;
        
        case 6:
       printf("Estamos no mês de Junho! :D\n");
        break;
        
        case 7:
       printf("Estamos no mês de Julho! :D\n");
        break;
        
         case 8:
       printf("Estamos no mês de Agosto! :D\n");
        break;
        
         case 9:
       printf("Estamos no mês de Setembro! :D\n");
        break;
        
         case 10:
       printf("Estamos no mês de Outubro! :D\n");
        break;
        
         case 11:
       printf("Estamos no mês de Novembro! :D\n");
        break;
        
         case 12:
       printf("Estamos no mês de Dezembro! :D\n");
        break;
        
        default:
        printf("Essa opção é inválida :( Programa encerrado");
        return 1;
    }
    return 0;
}