#include <stdio.h>

int a[20][20],q[20]={0}, visited[20]={0}, n, i, j, f = 0, r = -1;

void bfs(int v)
{
    for (i = 0; i < n; i++)
        if (a[v][i] && !visited[i])
            q[++r] = i;
    if (f <= r)
    {
    visited[q[f]] = 1;
    bfs(q[f++]);
    }
}

int main()
{
    printf("\n Enter the number of vertices :- ");

    scanf("%d", &n);

    printf("\n Enter graph data in matrix form: \n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    bfs(0);

    printf("\n The node which are reachable are: \n");
    for (i = 0; i < n; i ++)
        if (visited[i])
            printf("%d\t", i);
        else
            printf("\n Bfs is not possible");

    return 0;
    
}