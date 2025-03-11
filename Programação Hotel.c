#include <stdio.h>
#include <locale.h>
//Inicio
int main(){
    setlocale(LC_ALL,"");
    int opcao, opcao2, opcao3;
    char nome[20], enderecomail[30], CPF[15], pag[15];
    char aliment[30], bebida[20], limp[20], amenidades[20], lavanderia[3];
    char spa [3], pacote [3], baba[3], jantar[3];
    printf("Selecione a opção desejada:\n");
    printf("1- Fazer Check-in\n");
    printf("2- Chamar Serviço de quarto\n");
    printf("3- Fazer pedido\n");
    scanf("%d",&opcao);
    
     switch(opcao){
        case 1:
        printf("Informe o nome do hospéde:\n");
        scanf("%s", nome);
        printf("Informe o endereço de e-mail do hospéde:\n");
        scanf("%s", enderecomail);
        printf("Informe o CPF do hóspede:\n");
        scanf("%s", CPF);
        printf("Informe a forma de pagamento escolhida:\n");
        scanf("%s", pag);
        printf("Seu check in foi efetuado com sucesso!");
        break;
        
        case 2:
        printf("Deseja chamar algum Serviço de quarto?\n");
        printf("Selecione o serviço:\n");
        printf("1- Serviço de alimentação e bebidas\n");
        printf("2- Serviço de limpeza e arrumação\n");
        printf("3- Serviço de Amenidades\n");
        printf("4- Serviço de Lavanderia\n");
        scanf("%d", &opcao2);
        
        switch(opcao2){
            case 1:
            printf("Informe o que gostaria de comer:");
            scanf("%s", aliment);
            printf("Informe o que gostaria de beber:");
            scanf("%s", bebida);
            printf("Seu pedido chegará em alguns minutos!");
            break;
           
            case 2: 
            printf("Informe qual serviço de limpeza gostaria de receber:\n");
            scanf("%s", limp);
            printf("O serviço solicitado chegará em alguns minutos!\n");
            break; 
            
            case 3:
            printf("Quais items de higiene está precisando? (shampoo, sabonete, entre outros):\n");
            scanf("%s", amenidades);
            printf("Os itens solicitados chegaram em alguns minutos!");
            break; 
            
            case 4:
            printf("Deseja serviço de lavanderia? (Responda com sim ou não):\n");
            scanf("%s",lavanderia);
            printf("Seu serviço de lavanderia chegará em alguns minutos!");
            break;
            
            default:
            printf("Opção de serviço inválida!\n");
            return 1;
        }
        case 3:
        printf("Gostaria de fazer algum pedido? Confira em nosso menu:");
        printf("1- Spa");
        printf("2- Pacotes românticos");
        printf("3- Serviço de babá");
        printf("4- Jantar privativo");
        scanf("%d", &opcao3);
        
        switch(opcao3){
            case 1:
            printf("Deseja contratar um serviço de spa? (responda com sim ou não)");
            scanf("%s", spa);
            if (spa == "sim")
            {
                printf("Seu serviço de massagem chegará em alguns minutos.");
            }
            else if (spa == "não")
            {
            printf("Serviço cancelado!");
            }
            break;
            
            case 2:
            printf("Deseja que enviemos um pacote romântico? (Flores, champanhe, chocolates, etc.)");
            scanf("%s",pacote);
            printf("Seu pacote chegará em alguns minutos!");
            break;
            
            case 3:
            printf("Gostaria de contratar um serviço de babá?");
            scanf("%s", baba);
            printf("Seu serviço de babá chegará em breve!");
            break;
            
            case 4: 
            printf("Deseja que preparemos um jantar privativo em seu quarto?");
            scanf("%s", jantar);
            printf("Jantar privativo agendado!");
        }
     default: 
         printf("Essa opção é inválida =( Programa encerrado");
         return 2;
     }
     return 0;
     }