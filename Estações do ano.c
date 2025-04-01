#include <stdio.h>
#include <locale.h>
//Inicio
int main(){
    setlocale(LC_ALL,"");
int num;
    printf("Digite uma estação do ano (1-4):\n");
    scanf("%d",&num);
    
    switch(num){
        case 1:
        printf("Estamos no Verão!\n");
        break;
        
        case 2:
         printf("Estamos no Outono!\n");
        break;
        
        case 3:
        printf("Estamos no Inverno!\n");
        break;
        
        case 4:
         printf("Estamos na Primavera!\n");
        break;
        
        default:
        printf("Essa opção é inválida :( Programa encerrado");
        return 1;
    }
    return 0;
}