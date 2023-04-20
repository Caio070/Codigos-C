#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num[6];
    int i, j, temp;
    srand(time(NULL));//Gerador os números aleatórios.
    for(i=0;i<6;i++){//Gera os números aleatórios sem repetir.
        num[i] = rand() % 60 + 1;
        for(j=0;j<i;j++){
            if(num[i]==num[j]){
                i--;
                break;
            }
        }
    }
    for(i=0;i<5;i++){ //Oraganiza os números em ordem crescente.
        for(j=i+1;j<6;j++){
            if(num[i]>num[j]){
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    printf("Numeros sorteados: ");//Imprime os números.
    for(i=0;i<6;i++){
        printf("%d ", num[i]);
    }
}