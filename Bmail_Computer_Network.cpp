#include <cstdio>
#include <vector>

const int NMAX=200001;

int p[NMAX];

int main()
{

 int n;
 scanf("%d ",&n);
 for(int i=2;i<=n;i++)
     scanf("%d ",&p[i]);

 std::vector<int> vetor;
 int q=n;
 while(q!=1)
       {
        vetor.push_back(q);
        q=p[q];
       }
 vetor.push_back(1);
 for(int i=vetor.size()-1;i>=0;i--)
     printf("%d ",vetor[i]);
 return 0;
}