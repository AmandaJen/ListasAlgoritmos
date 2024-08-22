#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
struct pessoas{ //Struct para todo o codigo
    char nome [40];
    char email[50];
    char endereco [100];
    char telefone [20];
};

void cadastro (char nome[40], char email[50], char endereco[100], char telefone[20]){ //Colocar os cadastros
    fflush(stdin);
    printf ("Digite o nome para o cadastro\n");
    fgets(nome, 40, stdin);
    printf ("Digite o email para cadastro\n");
    fgets(email, 50, stdin);
    printf ("Digite o endereco onde essa pessoa mora\n");
    fgets(endereco, 100, stdin);
    printf ("Digite o telefone\n");
    fgets(telefone, 20, stdin);
}

void alfabetica (int quantidadec, struct pessoas cadastros[5]){ //Ordem Alfabefica
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

void apagar (char nome[40], char email[50], char endereco[100], char telefone[20]){
    strcpy(nome, "");
    strcpy(email, "");
    strcpy(endereco, "");
    strcpy(telefone, "");
}

int main (){
    int tarefa=0, quantidadep=-1, quantidadec=0, qntc, alterar=1, x;
    char nomep[40]; //Nome para pesquisa
    struct pessoas cadastros[5];
    struct pessoas auxiliar;
    system("CLS");
    while (tarefa!=6){
        printf ("Digite um numero para realizar as tarefas: \n1- Cadastro de informacoes \n2- Pesquisa por nome \n3- Classificacao por ordem alfabetica \n4- Alterar dados \n5- Apagar cadastros \n6- Encerrar o programa\n");
        scanf ("%i", &tarefa);
        switch (tarefa){
            case 1: //Cadastro de pessoas
                quantidadep=0;
                while(quantidadep<=quantidadec){
                    quantidadep++;
                }
                cadastro (cadastros[quantidadep].nome,cadastros[quantidadep].email,cadastros[quantidadep].endereco,cadastros[quantidadep].telefone);
                quantidadec++;
                system("CLS");
                break;
            case 2: //Pesquisa por nome
                printf("Digite o nome a ser pesquisado: ");
                fflush(stdin);
                fgets(nomep, 40, stdin);
                x=1;
                    while (1){
                        if (strcmp(cadastros[x].nome, nomep) == 0) {
                            printf("\nNome: %s Email: %sEndereco: %s Telefone:%s \n\n", cadastros[x].nome, cadastros[x].email, cadastros[x].endereco, cadastros[x].telefone);
                        }
                        if (x==quantidadec){
                            break;
                        }
                        x++;
                    }
                break;
            case 3: //Ordem alfabetica
                alfabetica(quantidadec,cadastros);
                for (qntc=0;qntc<=quantidadec;qntc++){
                    printf ("Nome:%s\n Email:%s\n Endereco:%s\n Telefone:%s\n",cadastros[qntc].nome,cadastros[qntc].email,cadastros[qntc].endereco,cadastros[qntc].telefone);
                }
                break;
            case 4: //Editar cadastros
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
                        printf ("Digite o numero correspondente ao dado que precisa ser corrigido: \n1-Nome \n2-Email \n3-Endereco \n4-Telefone \n5-Voltar\n");
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
                            case 2 : printf ("Reescreva o email:\n");
                                fgets(cadastros[qntc].email, 10, stdin);
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
                system("CLS");
                break;   
            case 5: //Deletar cadastros
                qntc=1; 
                while(qntc!=6){
                    printf("Digite o cadastro a ser apagado:\n\n");
                    quantidadep=1;
                    while (quantidadec>=quantidadep){ //Mostrar todos os cadastros
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
                    apagar (cadastros[qntc].nome, cadastros[qntc].email, cadastros[qntc].endereco, cadastros[qntc].telefone); //Apagar o cadastro escolhido e subtrair um de cada para ficar uma lista igual
                    for (x=qntc;x<quantidadep;x++){
                        auxiliar=cadastros[x];
                        cadastros[x]=cadastros[x-1];
                        cadastros[x-1]=auxiliar;
                    }
                    quantidadec--;
                }
                break;
            case 6:
                break;
            default:
                printf("Coloque um valor valido");
            break;
        }
    }
    return 0;
} 