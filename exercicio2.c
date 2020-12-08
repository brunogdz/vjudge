#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno {
    char* nome;
    int matricula;
    float p1, p2, p3;
};
typedef struct aluno Aluno;

preencher(int i, Aluno** Turma, int n){
    char name[81];
    for(i = 0; i< n; i++){
        Turma[i]= (Aluno*)malloc(sizeof(Aluno));

    printf("Digite o nome do aluno(a):\n");
    scanf(" %80[^\n]",name);

    Turma[i]->nome = strdup(name);
    printf("Digite a sua matricula:\n");
    scanf(" %d",&Turma[i]->matricula);
    printf("Digite as suas notas:\n");
    printf("Digite a sua P1:");
    scanf("%f",&Turma[i]->p1);
    printf("Digite a sua P2:");
    scanf("%f",&Turma[i]->p2);
    printf("Digite a sua P3:");
    scanf("%f",&Turma[i]->p3);


    }
}
void imprimir(int n, Aluno** Turma){
    if(Turma!=NULL){
            printf("Dados dos alunos da turma:\n");
        for(int i =0; i<n; i++){
            printf("Aluno: %s|Matricula: %d|Nota p1: %.2f|p2: %.2f|p3: %.2f\n",Turma[i]->nome,Turma[i]->matricula, Turma[i]->p1, Turma[i]->p2, Turma[i]->p3);
        }
    }else{
    printf("Turma vazia!\n");
    }
}
void limpar(int n, Aluno** Turma){
    for(int i=0; i< n; i++){
        free(Turma[i]);
        Turma[i]=NULL;
    }
    free(Turma);
}

float media_turma(int n, Aluno** Turma){
    float media = 0;
    if(Turma!=NULL){

    for(int i = 0; i< n; i++){
            media = media + (Turma[i]->p1 + Turma[i]->p2 + Turma[i]->p3)/3;
        }
    }

    return media/n;
}

void imprime_aprovados (int n, Aluno** turma){
    float media=0;
    if(turma!=NULL){
            printf("Lista dos Aprovados na turma:\n");
        for(int i =0; i<n; i++){
            media = (turma[i]->p1 + turma[i]->p2 + turma[i]->p3)/3;
            if(media >= 5){
                printf("%s\n",turma[i]->nome);
            }
        }
    }else{
    printf("Turma vazia!\n");
    }
}
int main (){
    int n, i;
    float mediaT;

    Aluno** Turma;
    printf("Escreva o numero de alunos na turma:\n");
    scanf("%d",&n);

    Turma = (Aluno**)malloc(n*sizeof(Aluno*));

    preencher(i,Turma,n);
    imprimir(n,Turma);
    imprime_aprovados(n,Turma);
    mediaT = media_turma(n,Turma);
    printf("A media da turma eh:%.2f\n",mediaT);


    limpar(n,Turma);
    return 0;
}
