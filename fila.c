#include <stdio.h>
#include <stdlib.h>

int inicio = -1;
int fim = -1;
int fila[10];

void enfileirar(int valor){
   if(fim==9){
      printf("Erro: a fila esta cheia!\n");
   } else{
      if(inicio==-1){
         inicio=0;
      }
      fim++;
      fila[fim]=valor;
   }
}
void desenfileirar(){
   if(inicio==-1 || inicio>fim){
      printf("Erro: a fila esta vazia!");
   } else{
      printf("Valor removido: %d\n", fila[inicio]);
      inicio++;
   }
}

void imprimir(){
   if (inicio==-1 || inicio>fim){
      printf("A fila esta vazia!\n");
   } else{
      printf("Elementos na fila: ");
      for(int i=inicio;i<=fim;i++){
         printf("%d ", fila[i]);
      }
      printf("\n");
   }
}

int main(){
   int opcao, valor;

   do{
      printf("\nSelecione uma opcao:\n");
      printf("1 - Enfileirar\n");
      printf("2 - Desenfileirar\n");
      printf("3 - Imprimir\n");
      printf("4 - Sair\n");
      scanf("%d", &opcao);

      switch (opcao){
         case 1:
            printf("Digite o valor a ser enfileirado: ");
            scanf("%d", &valor);
            enfileirar(valor);
            break;
         case 2:
            desenfileirar();
            break;
         case 3:
            imprimir();
            break;
         case 4:
            printf("Programa encerrado.\n");
            break;
         default:
            printf("Opcao invalida!\n");
            break;
      }
   } while (opcao != 4);
}