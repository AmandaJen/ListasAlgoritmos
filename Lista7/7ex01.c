#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
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
    scanf ("%s",idade);
    printf ("Digite o endereco onde essa pessoa mora\n");
    fgets(endereco, 100, stdin);
    printf ("Digite o telefone\n");
    fgets(telefone, 20, stdin);
}

void alfabetica (int quantidadec, struct pessoas cadastros[5]){
    int x, y;
    struct pessoas z;
    for (x=1;x<quantidadec-1;x++){
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
    int tarefa=0, quantidadep=-1, quantidadec=0, qntc, alterar=1, x;
    char idade[10];
    struct pessoas cadastros[5];
    while (tarefa!=5){
        printf ("Digite um numero para realizar as tarefas: \n1- Cadastro de informacoes \n2- Pesquisa por idade \n3- Classificacao por ordem alfabetica \n4- Alterar dados \n5- Encerrar o programa\n");
        scanf ("%i", &tarefa);
        switch (tarefa){
            case 1:
                quantidadep=0;
                while(quantidadep<=quantidadec){
                    quantidadep++;
                }
                cadastro (cadastros[quantidadep].nome,cadastros[quantidadep].idade,cadastros[quantidadep].endereco,cadastros[quantidadep].telefone);
                quantidadec++;
                break;
            case 2:
                printf ("Digite a idade a ser procurada\n");
                scanf ("%s",idade);
                x=1;
                    while (1){
                        printf ("Entrou while\n");
                        printf ("idade %s, cadastro %s\n", idade, cadastros[x].idade);
                        if (strcmp(cadastros[x].idade, idade) != 0) {
                            printf("Nome: %s \nIdade: %s\nEndereco: %s \nTelefone:%s \n\n", cadastros[x].nome, cadastros[x].idade, cadastros[x].endereco, cadastros[x].telefone);
                        }
                        if (x==quantidadec){
                            break;
                        }
                        x++;
                    }
                break;
            case 3: alfabetica(quantidadec,cadastros);
                for (qntc=0;qntc<=quantidadec;qntc++){
                    printf ("Nome:%s\n Idade:%s\n Endereco:%s\n Telefone:%s\n",cadastros[qntc].nome,cadastros[qntc].idade,cadastros[qntc].endereco,cadastros[qntc].telefone);
                }
                break;
            case 4:
                qntc=1; 
                while(qntc!=6){
                    quantidadep=1;
                    alterar=1;
                    printf ("Digite o numero cadastro a ser corrigido\n");
                    while (quantidadec>=quantidadep){
                        printf ("%i- %s\n", quantidadep, cadastros[quantidadep].nome);
                        quantidadep++;
                    }
                    printf ("6-Para voltar\n");
                    scanf ("%i", &qntc);
                    if (qntc<=0 || qntc>=7){
                        printf ("\nTente novamente\n\n");
                    }
                    if (qntc==6){
                        break;
                    }
                    while(qntc>0 && qntc<7 && alterar!=5){
                        printf ("Digite o numero correspondente ao dado que precisa ser corrigido: \n1-Nome \n2-Idade \n3-Endereco \n4-Telefone \n5-Voltar\n");
                        scanf ("%i", &alterar);
                        fflush(stdin);
                        if (alterar<0 || alterar>6){
                            printf ("\nTente novamente\n\n");
                        }
                        if (alterar==5){
                            break;
                        }
                        switch (alterar) {
                            case 1: printf ("Reescreva o nome:\n");
                                fgets(cadastros[qntc].nome, 40, stdin);
                                break;
                            case 2 : printf ("Reescreva a idade:\n");
                                fgets(cadastros[qntc].idade, 10, stdin);
                                break;
                            case 3: printf ("Reescreva o endereco:\n");
                                fgets(cadastros[qntc].endereco, 100, stdin);
                                break;
                            case 4: printf ("Reescreva o telefone:\n");
                                fgets(cadastros[qntc].telefone, 20, stdin);
                                break;
                            case 5: 
                                break;
                        }
                        break;
                    }
                }   
            case 5:
                break;
            break;
        }
    system("CLS");
    }
    return 0;
} 