#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int ROMtoInt(char *A)
{
    char *a = strdup(A);
    int V[strlen(a)];
    for (int i = 0; i < strlen(a); i++)
    {
        switch (a[i])
        {
        case 'I':
            V[i] = 1;
            break;
        case 'V':
            V[i] = 5;
            break;
        case 'L':
            V[i] = 50;
            break;
        case 'X':
            V[i] = 10;
            break;
        case 'C':
            V[i] = 100;
            break;
        case 'D':
            V[i] = 500;
            break;
        case 'M':
            V[i] = 1000;
            break;
        default:
            break;
        }
    }
    for(int i = 0; i< strlen(a)-1; i++){
        if(V[i] < V[i+1]){
            if((V[i+1] - V[i]) < 0){
               V[i+1] = V[i+1] + V[i];
            }else{
                V[i+1] = V[i+1] - V[i];
            }
        }else{
            V[i+1] = V[i+1] + V[i];
        }
    }
    int n = strlen(a);
    free(a);
    return V[n-1];

}

/* Representar numeros romanos em números decimais */
int main()
{
    char A[100];
    scanf("%s", &A);
    printf("Tamanho: %d\n", strlen(A));

    int valor = ROMtoInt(A);
    printf("O numero romano: %s eh equivalente a: %d", A, valor);
    return 0;
}