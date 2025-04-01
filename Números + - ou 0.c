#include <stdio.h>
#include <locale.h>
//inicio
    int main (){
        setlocale(LC_ALL,"");
        int num;
        printf("Informe um número:\n");
        scanf("%d", &num);
        
        if(num > 0)
        {
            printf("O número informado é positivo! =)");
        }
        else if (num < 0)
        {
            printf("O número informado é negativo!");
        }
        else 
        {
            printf("O número informado é zero.");
        }
        return 0;
    }