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
    int qntaluno, qntalunostotal=1, tarefa=0, x, y;
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
                break;
            case 3:
                break;
            case 4:
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
                printf("Digite qualquer numero para sair");
                scanf ("%i", &y);
                system("CLS");
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            default:
                printf("Coloque um valor valido");
                break;
        }
    }
}