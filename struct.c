#include <stdio.h>
#include <string.h>

typedef struct { 
    char nome[50];
    int matricula;
    float nota1;
    float nota2;
} Aluno;

int main() {
    Aluno alunos[3];
    int i;
    
    for (i=0;i<3;i++) { //Recebe os dados de nome, matricula e notas dos alunos.
        printf("Informe o nome do aluno %d: ", i+1);
        scanf("%s", alunos[i].nome);
        
        printf("Informe a matricula do aluno %d: ", i+1);
        scanf("%d", &alunos[i].matricula);
        
        printf("Informe a primeira nota do aluno %d: ", i+1);
        scanf("%f", &alunos[i].nota1);
        
        printf("Informe a segunda nota do aluno %d: ", i+1);
        scanf("%f", &alunos[i].nota2);
        
        printf("\n");
    }
    
    printf("Alunos cadastrados:\n\n");
    for (i = 0; i < 3; i++) { //Imprime os dados dos alunos.
        printf("Nome do aluno %d: %s\n", i+1, alunos[i].nome);
        printf("Matricula do aluno %d: %d\n", i+1, alunos[i].matricula);
        printf("Nota 1 do aluno %d: %.2f\n", i+1, alunos[i].nota1);
        printf("Nota 2 do aluno %d: %.2f\n", i+1, alunos[i].nota2);
        printf("\n");
    }
    
    return 0;
}
