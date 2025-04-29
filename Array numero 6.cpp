#include <stdio.h>
#include <stdlib.h>
int main (){
    int num[6], soma=0, i=0;
    printf("Digite 6 numeros inteiros:\n"); 
    
    for(i=0; i<6; i++){
        scanf("%d", &num[i]);
        soma += num[i];
    }
    
    printf("A soma dos numeros e: %d\n", soma); 
    return 0;   
}