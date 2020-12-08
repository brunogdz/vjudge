#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000000

void ordenar (int n, int vetor[]);
int mediana(int, int);

int vetor[MAX];

int main()
{
    int n, i, meio, num;

    while (scanf("%d", &n) == 1) {
        for (i = 0; i < n; i++){
            scanf("%d", &vetor[i]);
            if(vetor[i]>65536){
                break;
            }
        }

        ordenar(n,vetor);

        meio = n / 2;
        if (n % 2 == 1)
            printf("%d %d 1\n", vetor[meio], mediana(vetor[meio], n));
        else if (vetor[meio] == vetor[meio - 1])
            printf("%d %d 1\n", vetor[meio - 1], mediana(vetor[meio - 1], n));
        else {
            num = mediana(vetor[meio - 1], n) + mediana(vetor[meio], n);
            printf("%d %d %d\n", vetor[meio - 1], num, vetor[meio] - vetor[meio - 1] + 1);
        }
    }
    return 0;
}

void ordenar(int n,int vetor[])
{
  int i, j, aux = 0;
    for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    if (vetor[i] < vetor[j])
                    {
                        aux = vetor[i];
                        vetor[i] = vetor[j];
                        vetor[j] = aux;
                    }
                }
            }
}

int mediana(int num, int n)
{
    int i, aux;

    for (aux = i = 0; vetor[i] <= num && i < n; i++)
        if (vetor[i] == num)
            aux++;

    return aux;
}
