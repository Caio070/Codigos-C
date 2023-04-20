#include <stdio.h>

int main() {
    int temp[9], i;
    printf("=== MAIORES TEMPERATURAS DA SEMANA EM CAMPO GRANDE\n\n");
    for(i=0;i<9;i++){
        printf("Digite uma temperatura = ");
        scanf("%d", &temp[i]);
    }
    printf("\nTemperaturas registradas: ");
    for(i=0;i<9;i++){
        printf("%d ", temp[i]);
    }
}