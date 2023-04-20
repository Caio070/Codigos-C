#include <stdio.h>

int main(){
    int l;
    float aluno [5][3];

    for(l=0;l<4;l++){//Recebe os dados de matrícula e das notas.
        printf("Matricula: ");
        scanf("%f", &aluno[l][0]);
        
        printf("Nota 1: ");
        scanf("%f", &aluno[l][1]);
        
        printf("Nota 2: ");
        scanf("%f", &aluno[l][2]);
    }
    printf("\n\n===============\n\n");//Imprimi os dados de matrículas e das notas
    
    printf("Mat \t N1 \t N2\n\n");
    
    for(l=0;l<4;l++){
        printf("| %.0f\t %.1f\t %.2f\t|\n", aluno[l][0],aluno[l][1],aluno[l][2]);
    }
} 