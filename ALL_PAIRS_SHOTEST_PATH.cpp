#include <cstdio>
using namespace std;

const int INF = 1000000;
int g[200][200];
int n, m, q, u, v, w;

int main()
{
    while (scanf("%d%d%d", &n, &m, &q) == 3 && n)
    {
        int g[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                g[i][j] = (i == j ? 0 : INF);
            }
        }
        for (int i = 0; i < m; i++)
        {
            scanf("%d%d%d", &u, &v, &w);
            g[u][v] = (w < g[u][v] ? w : g[u][v]);
        }
        // método de floyd - warshal
        for (int k = 0; k < n; k++)
            for (int i = 0; i < n; i++)
                for (int j = 0; j < n; j++)
                    if (g[i][j] > g[i][k] + g[k][j] && g[i][k] < INF && g[k][j] < INF)
                        g[i][j] = g[i][k] + g[k][j];
        // se tiver ciclo negativo fica como infinito
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                for (int k = 0; g[i][j] != -INF && k < n; k++)
                    if (g[k][k] < 0 && g[i][k] != INF && g[k][j] != INF)
                        g[i][j] = -INF;
        // verificando o caminho ou se eh impossivel
        for (int i = 0; i < q; i++)
        {
            scanf("%d%d", &u, &v);
            if (g[u][v] == INF)
                printf("Impossible\n");
            else if (g[u][v] == -INF)
                printf("-Infinity\n");
            else
                printf("%d\n", g[u][v]);
        }
        printf("\n");
    }
    return 0;
}