#include <stdio.h>
int main() {
    int temp[10], i, k, x, aux, maior;
    printf("===Digite valores aleatorios===\n\n");//Recebe os valores.
    
    for(i=0;i<10;i++) {
        printf("Digite um valor: ");
        scanf("%d", &temp[i]);
        
        for(k=0;k<=i-1;k++){//Verificando se o valor já foi digitado antes.
            if(temp[i]==temp[k]){

                printf("Valor %d ja existe no conjunto.\n", temp[i]);
                i-=1;
            }
        }
    }
    maior=temp[0];//Verifica o maior valor.
    for(i=0;i<10;i++){
        if(temp[i]>maior){
            maior=temp[i];
        }
    }
    for(i=0;i<10;i++){//Organiza os valores em ordem crescente.
        for(x=i+1;x<10;x++){
            if(temp[i]>temp[x]){
                aux=temp[i];
                temp[i]=temp[x];
                temp[x]=aux;
            }
        }
    }
    printf("\nOs valores sao: ");//Imprimi os valores.
    
    for(i=0;i<10;i++){
        printf("%d, ", temp[i]);
    }
    printf("\nMaior valor = %d", maior);
}