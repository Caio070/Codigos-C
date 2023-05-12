#include <stdio.h>

int main(){
    int val[5], i, k;
    printf("===Digites alguns valores===\n\n");

    for(i=0;i<5;i++){//Recebe os valores.
        printf("Digite algum valor: ");
        scanf("%d", &val[i]);

        for(k=0;k<=i-1;k++){//Verifica se repete algum valor.
            if(val[i]==val[k]){
                printf("Valor %d ja existe no conjunto.\n", val[i]);
                i-=1;
            }
        }
    }
    printf("\nValores digitados foram: ");//Imprime os valores.
    for(i=0;i<5;i++){
        printf("%d ", val[i]);
    }
}