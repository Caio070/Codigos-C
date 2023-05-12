#include <stdio.h>

int main(){
    int val[5], i, x, aux;
    printf("===Digite valores aleatorios===\n\n");

    for(i=0;i<5;i++){//Recebe os valores.
        printf("Digite algum valor: ");
        scanf("%d", &val[i]);
    }
    for(i=0;i<5;i++){//Organiza em ordem crescente.
        for(x=i+1;x<5;x++){
            if(val[i]>val[x]){
                aux=val[i];
                val[i]=val[x];
                val[x]=aux;
            }
        }
    }
    printf("\nValores digitados = ");//Imprime os valores.
    for(i=0;i<5;i++){
        printf("%d ", val[i]);
    }
}