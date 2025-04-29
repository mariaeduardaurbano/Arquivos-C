#include <stdio.h>
int main() {
    int numeros[10], procurar, encontrado = 0;
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }
    printf("Digite um número para procurar:\n");
    scanf("%d", &procurar);

    for (int i = 0; i < 10; i++) {
        if (numeros[i] == procurar) {
            printf("O número %d está no índice %d.\n", procurar, i);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado)
        printf("O número %d não foi encontrado.\n", procurar);
    return 0;
}