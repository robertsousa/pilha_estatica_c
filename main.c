#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tamanho 5

//Estrutura da pilha
struct tpilha{
    int dados[tamanho];
    int ini;
    int fim;
};

//Variaveis globais
struct tpilha pilha;
int op;

//prototipa??o
void pilha_entrar();
void pilha_sair();
void pilha_mostrar();
void menu_mostrar();

int main()
{
    setlocale(LC_ALL, "Portuguese");
    op = 1;
    pilha.ini = 0;
    pilha.fim = 0;
    while(op != 0){
        system("CLS");
        pilha_mostrar();
        menu_mostrar();
        scanf("%d", &op);
        switch(op){
            case 1:
                pilha_entrar();
                break;
            case 2:
                pilha_sair();
                break;
        }
    }
    return 0;
}

//Adicionar um elemento no final da pilha
void pilha_entrar(){
    //verifica o tamanho da pilha
    //se estiver cheia
    if(pilha.fim == tamanho){
        printf("\nA pilha est? cheia! Imposs?vel empilha!\n\n");
        system("Pause");
    }else{ //se estiver posi??o vazia
        printf("\nDigite o valor a ser empilhado: ");
        scanf("%d", &pilha.dados[pilha.fim]);
        pilha.fim++;
    }
}

//Retirar o ultimo elemento da pilha
void pilha_sair(){
    //Verifica se a pilha est? vazia
    //Se estiver
    if(pilha.ini == pilha.fim){
        printf("\nA pilha est? vazia, imposs?vel desempilhar!\n\n");
        system("Pause");
    }else{ // retira o ultimo elemento se tiver
        pilha.dados[pilha.fim-1] = 0;
        pilha.fim--;
    }
}

//Mostrar o conte?do da pilha
void pilha_mostrar(){
    int i;
     printf("[ ");
     for(i = 0; i < tamanho; i++){
        printf("%d ", pilha.dados[i]);
     }
     printf(" ]\n\n");
}

//Mostrar o menu de op??es
void menu_mostrar(){
    printf("\nEscolha uma op??o: \n");
    printf("1 - Empilhar\n");
    printf("2 - Desempilhar\n");
    printf("0 - Sair\n\n");
    printf("> ");
}
