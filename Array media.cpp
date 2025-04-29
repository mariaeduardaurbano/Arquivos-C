#include <stdio.h>
#include <stdlib.h>
int main (){
    float notas[6],soma=0, media;
    int i;
     printf("Informe as 6 notas do aluno:\n");
        for(i=0;i<6;i++){
        scanf("%f",&notas[i]);
        soma+=notas[i];
        }

    media = soma/6;

    printf("A media do aluno e: %.2f\n",media);
    printf ("Notas acima da media:\n");
        for(i=0;i<6;i++){
        if(notas[i]>media){
        printf("%.2f\n",notas[i]);
    }
    }   
    return 0;
}