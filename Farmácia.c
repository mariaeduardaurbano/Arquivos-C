#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
//Inicio
int main(){
    setlocale(LC_ALL,"");
    int opcao, qnt, i;
    float preco, t = 0, subtotal;
    char continuar;
     do{
         printf("Seja bem-vindo a Farmácia Farmalife! Aqui estão nossos produtos disponíveis:\n");
         printf("1 - Paracetamol - R$5,00\n");
         printf("2 - Ibuprofeno - R$7,50\n");
         printf("3 - Dipirona - R$4,00\n");
         printf("4 - Amoxilina - R$12,00\n");
         printf("5 - Sair\n");
         scanf("%d", &opcao);
         
         if (opcao == 5) {
            printf("Total final da compra: R$ %.2f\n", t);
            printf("Obrigado por comprar conosco! A farmácia Farmalife agradece a preferência =)\n");
            break;
        }
        
        switch(opcao){
            case 1: 
                preco = 5.00;
                printf("Você escolheu o Paracetamol! Qual quantidade deseja comprar?\n");
                scanf("%d", &qnt);
                break;
            case 2:
                preco = 7.50;
                printf("Você escolheu o Ibuprofeno! Qual quantidade deseja comprar?\n");
                scanf("%d", &qnt);
                break;
            case 3:
                preco = 4.00;
                printf("Você escolheu a Dipirona! Qual quantidade deseja comprar?\n");
                scanf("%d", &qnt);
                break;
            case 4: 
                preco = 12.00;
                printf("Você escolheu a Amoxilina! Qual quantidade deseja comprar?\n");
                scanf("%d", &qnt);
                break;
            default:
                printf("Opção inválida =( tente novamente!\n");
                continue;
        }
        
        subtotal = 0;  
        for (i = 0; i < qnt; i++){
            subtotal += preco;
        }
        
        t += subtotal;
        printf("Item adicionado ao seu carrinho! Total Parcial: R$ %.2f\n", t);
        
        getchar(); 
        printf("Deseja comprar mais produtos? ('1' para sim ou '2' para não)\n");
        scanf("%c", &continuar);
    } while (continuar == '1' || continuar == '2');

    printf("\n---Nota Fiscal---\n");
    printf("Total da compra: R$ %.2f\n", t);
    printf("Obrigado pela preferência! A Farmácia Farmalife agradece.\n");
    
    return 0;
}
