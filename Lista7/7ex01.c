#include <stdio.h>
#include <conio.h>
#include <string.h>
struct pessoas{
    char nome [40];
    char idade[10];
    char endereco [100];
    char telefone [20];
};

void cadastro (char nome[40], char idade[10], char endereco[100], char telefone[20]){
    fflush(stdin);
    printf ("Digite o nome para o cadastro\n");
    fgets(nome, 40, stdin);
    printf ("Digite a idade da pessoa\n");
    fgets(idade, 10, stdin);
    printf ("Digite o endereco onde essa pessoa mora\n");
    fgets(endereco, 100, stdin);
    printf ("Digite o telefone\n");
    fgets(telefone, 20, stdin);
}

void alfabetica (int quantidadec, struct pessoas cadastros[5]){
    int x, y;
    struct pessoas z;
    for (x=0;x<quantidadec-1;x++){
        for (y=x+1;y<quantidadec;y++){
            if (strcmp(cadastros[x].nome,cadastros[y].nome)>0){
                z=cadastros[x];
                cadastros[x]=cadastros[y];
                cadastros[y]=z;
            }
        }
    }
}

int main (){
    int tarefa=0, quantidadep=-1, quantidadec=0, qntc;
    struct pessoas cadastros[5];
    while (tarefa!=5){
        printf ("Digite um numero para realizar as tarefas: \n1- Cadastro de informacoes \n2- Pesquisa por idade \n3- Classificacao por ordem alfabetica \n4- Alterar dados \n5- Encerrar o programa\n");
        scanf ("%i", &tarefa);
        switch (tarefa){
            case 1:
                while(quantidadep<=quantidadec){
                    quantidadep++;
                }
                cadastro (cadastros[quantidadep].nome,cadastros[quantidadep].idade,cadastros[quantidadep].endereco,cadastros[quantidadep].telefone);
                quantidadec++;
            case 2:
                break;
            case 3: alfabetica(quantidadec,cadastros);
                for (qntc=1;qntc<=quantidadec;qntc++){
                    printf ("Nome:%s\n Idade:%s\n Endereco:%s\n Telefone:%s\n",cadastros[qntc].nome,cadastros[qntc].idade,cadastros[qntc].endereco,cadastros[qntc].telefone);
                }
            case 4:
                break;
            case 5:
                break;
        }
    }
    return 0;
}