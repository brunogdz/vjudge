#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int N;
    scanf("%d",&N);
    int vetor[N];
    for(int i = 0; i < N; i++){
        vetor[i] = i+1;
    }

    for(int i = 1; i <= N; i++){
        for(int j = 0; j < i; j++){
            printf("%d ", vetor[j]);
        }
        printf("\n");
    }
    return 0;
}