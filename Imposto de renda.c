#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    float salario, imposto;
    printf("Informe seu salário mensal:\n");
    scanf("%f", &salario);

    if (salario <= 1903.98) {
        printf("Você está isento do imposto de renda.\n");
    } 
    else if (salario <= 2826.65) {
        printf("Você pagará 7,5 porcento de imposto de renda.\n");
        imposto = salario * 0.075;
        printf("Seu valor a ser pago é de: %.2f\n", imposto);
    } 
    else if (salario <= 3751.05) {
        printf("Você pagará 15 porcento de imposto de renda.\n");
        imposto = salario * 0.15;
        printf("Seu valor a ser pago é de: %.2f\n", imposto);
    } 
    else if (salario <= 4664.68) {
        printf("Você pagará 22,5 porcento de imposto de renda.\n");
        imposto = salario * 0.225;
        printf("Seu valor a ser pago é de: %.2f\n", imposto);
    } 
    else {
        printf("Você pagará 27,5 porcento de imposto de renda.\n");
        imposto = salario * 0.275;
        printf("Seu valor a ser pago é de: %.2f\n", imposto);
    }

    return 0;
}