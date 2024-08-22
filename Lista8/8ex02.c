#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
struct bimestre{
    char nome [40];
    float nota;
};

int main (){
    system("CLS");
    char nomea [40];
    struct bimestre alunos[20];
    struct bimestre bbsort;
    int qntaluno, qntalunostotal=1, tarefa=0, x, y, qnta, alterar;
    while (tarefa !=7){
        printf ("Digite um numero correspondente as tarefas: \n1- Cadastrar os alunos \n2- Classificar os alunos por nota \n3- Correcao de nome ou nota errada \n4- Pesquisar os alunos por nome \n5- Listar os alunos aprovados \n6- Listar os alunos reprovados \n7- Encerrar o programa \n");
        scanf ("%i", &tarefa);
        switch (tarefa) {
            case 1:
                qntaluno=0;
                while(qntaluno<qntalunostotal){
                    qntaluno++;
                }
                system("CLS");
                printf ("Este e o %i aluno cadastrado\n", qntaluno);
                printf ("Digite o nome do aluno: ");
                fflush(stdin);
                fgets(alunos[qntaluno].nome, 40, stdin);
                printf ("Digite a nota desse aluno: ");
                scanf ("%f", &alunos[qntaluno].nota); 
                getchar();
                qntalunostotal++;
                system("CLS");
                break;
            case 2:
                for (x=1;x<qntalunostotal-1;x++){
                    for (y=x+1;y<qntalunostotal;y++){
                        if (alunos[x].nota<alunos[y].nota){
                            bbsort=alunos[x];
                            alunos[x]=alunos[y];
                            alunos[y]=bbsort;
                        }
                    }
                }
                for (x=1;x<qntalunostotal;x++){
                    printf ("%i - Aluno: %s Nota: %f \n\n\n", x, alunos[x].nome, alunos[x].nota);
                }
                break;
            case 3:
                system("CLS");
                qnta=1; 
                while(qnta!=20){
                    qntaluno=1;
                    alterar=1;
                    printf ("Digite o numero do cadastro a ser corrigido\n");
                    while (qntalunostotal>qntaluno){
                        printf ("%i- %s\n", qntaluno, alunos[qntaluno].nome);
                        qntaluno++;
                    }
                    printf ("21- Para voltar\n");
                    scanf ("%i", &qnta);
                    if (qnta<=0 || qnta>=22){
                        printf ("\nTente novamente\n\n");
                    }
                    if (qnta==21){
                        break;
                    }
                    while(qnta>0 && qnta<21 && alterar!=3){
                        printf ("Digite o numero correspondente ao dado que precisa ser corrigido: \n1- Nome \n2- Nota\n3- Para voltar\n");
                        scanf ("%i", &alterar);
                        fflush(stdin);
                        if (alterar<0 || alterar>4){
                            printf ("\nTente novamente\n\n");
                        }
                        if (alterar==3){
                            break;
                        }
                        switch (alterar) {
                            case 1: printf ("Reescreva o nome do aluno:\n");
                                fgets(alunos[qnta].nome, 40, stdin);
                                break;
                            case 2 : printf ("Reescreva a nota do aluno:\n");
                                scanf("%f", &alunos[qnta].nota); getchar();
                                break;
                            case 3: 
                                break;
                        }
                    }
                }
                system("CLS");
                break;
            case 4:
                system("CLS");
                printf("Digite o nome do aluno a ser pesquisado: ");
                fflush(stdin);
                fgets(nomea, 40, stdin);
                x=1;
                while (1){
                        if (strcmp(alunos[x].nome, nomea) == 0) {
                            printf("\nNome: %sNota: %f \n\n", alunos[x].nome, alunos[x].nota);
                        }
                        if (x==qntalunostotal){
                            break;
                        }
                        x++;
                    }
                printf("Digite qualquer numero para voltar ao menu ");
                scanf ("%i", &y);
                system("CLS");
                break;
            case 5:
                system("CLS");
                printf ("Alunos Aprovados:\n");
                for (x=1;x<qntalunostotal;x++){
                    if (alunos[x].nota>=6){
                        printf ("Nome:%sNota:%f\n\n", alunos[x].nome, alunos[x].nota);
                    }
                }
                printf("Digite qualquer numero para voltar ao menu ");
                scanf ("%i", &y);
                system("CLS");
                break;
            case 6:
                system("CLS");
                printf ("Alunos Reprovados:\n");
                for (x=1;x<qntalunostotal;x++){
                    if (alunos[x].nota<6){
                        printf ("Nome:%sNota:%f\n\n", alunos[x].nome, alunos[x].nota);
                    }
                }
                printf("Digite qualquer numero para voltar ao menu ");
                scanf ("%i", &y);
                system("CLS");
                break;
            case 7:
                system("CLS");
                break;
            default:
                printf("Coloque um valor valido");
                break;
        }
    }
}