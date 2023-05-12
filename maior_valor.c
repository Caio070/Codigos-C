#include <stdio.h>

int main(){
    int val[5], i, maior;
    printf("===Verifica o maior valor===\n\n");

    for(i=0;i<5;i++){//Recebe os valores.
        printf("Digite algum valor: ");
        scanf("%d", &val[i]);
    }
    maior=val[0];//Verifica o maior valor.
    for(i=0;i<5;i++){
        if(val[i]>maior){
            maior=val[i];
        }
    }
    printf("\nMaior valor = %d", maior);//Imprime o maior valor.
}