#include<bits/stdc++.h>

using namespace std;

int A[105][105];
int prox[105][105];
int noh, lim;

void F(){
    int i,j,k;
    for(k=1;k<=noh;k++){
        for(i=1;i<=noh;i++){
            for(j=1;j<=noh;j++){
                if(A[i][j]>A[i][k]+A[k][j]){
                    A[i][j] = A[i][k]+A[k][j];
                }
            }
        }
    }
}

int main(){
    int x,y,i,j;
    cin>>x;

    for(y =1;y<=x;y++){
        cin>>noh;
        for(i = 1; i<=noh; i++){
            for(j =1;j<=noh;j++){
                int w;
                cin>>w;
                if(i == j){
                    A[i][j] = 0;
                }else if(w == 0){
                    A[i][j]=0;
                }else{
                    A[i][j]=w;
                }
            }
        }
        F();
        int q,s,d;
        cin>>q;
        int soma = 0;
        while(q--){
            cin>>s>>d;
            soma+=A[s][d];
        }
        cout<<"Case #"<<y<<": "<<soma<<"\n";
        memset(A,0,sizeof(A));
    }
    return 0;
}