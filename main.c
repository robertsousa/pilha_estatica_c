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
typedef struct tpilha pilha;
int op;

//prototipa��o
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
        printf("\nA pilha est� cheia! Imposs�vel empilha!\n\n");
        system("Pause");
    }else{ //se estiver posi��o vazia
        printf("\nDigite o valor a ser empilhado: ");
        scanf("%d", &pilha.dados[pilha.fim]);
        pilha.fim++;
    }
}

void pilha_sair(){

}

void pilha_mostrar(){

}

void menu_mostrar(){

}
