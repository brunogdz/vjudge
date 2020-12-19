#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Componente{
    char* nomeComponente;
    float Antoine;
    struct Componente *prox;
};
typedef struct Componente C;

struct oleo{
    char* nome;
    float temperatura;
    int Ncomponentes;
    C *componentes;
    float saturacao;
};
typedef struct oleo Oleo;

C* inicializaComponente(char* nome, float A, float B, float CA, float Temp){
    C* ComponenteA = (C*)malloc(sizeof(C));
    ComponenteA->nomeComponente = strdup(nome);
    float aux = A - (B/(Temp+CA));
    ComponenteA->Antoine = aux;
    ComponenteA->prox = NULL;
    return ComponenteA;

}

Oleo* iniciaOleo(char* nomeOleo, float T, int N, char* nomeComp, float A, float B, float CA, float saturacao){
    Oleo* novo = (Oleo*)malloc(sizeof(Oleo));
    novo->nome = strdup(nomeOleo);
    novo->temperatura = T;
    novo->Ncomponentes = N;
    novo->saturacao = saturacao;
    novo->componentes = inicializaComponente(nomeComp, A, B, CA, T);
    return novo;
}

void ImprimeComponentes(C* ComponenteA){
    C* p;
    for(p = ComponenteA; p!=NULL; p = p->prox){
        printf("Nome do Componente:%s - Somatorio da conta Antoine: %.2f\n",p->nomeComponente, p->Antoine);
    }
}

int main(){
    Oleo* novo;
    char NomeOleo[100];
    char NomeComp[100];
    float T,A,B,CA,saturacao;
    int N;
    scanf("%s",NomeOleo);
    scanf("%f %f %f %f %f",&T,&A,&B,&CA,&saturacao);
    scanf("%s",NomeComp);
    scanf("%d", &N);
    novo = iniciaOleo(NomeOleo, T, N, NomeComp, A, B, CA, saturacao);

    printf("Imprimindo o Oleo\n");
    printf("O oleo eh: %s\nSua Temperatura: %f\nNumero de Componentes:%d\nSua Saturacao:%f\n",novo->nome,novo->temperatura,novo->Ncomponentes,novo->saturacao);
    ImprimeComponentes(novo->componentes);
    

    
    return 0;
}