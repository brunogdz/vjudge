#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE* p;
    p = fopen("entradaExemplo.txt","r");
    char a[100];
    fgets(a,100,p);
    printf("%s",a);
    fclose(p);
    return 0;
}