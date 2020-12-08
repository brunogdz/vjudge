#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,i;
    scanf("%d %d",&a,&b);
    int v[a];
    for(i = 0; i < (a-1); i++){
        scanf("%d",v[i]);
    }
    for(i = 0; i<(a-1);){
        i += v[i];
        if(i == (b-1)){
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;

}