#include <stdio.h>

int ar[10][10], visited[10], n;

void dfs(int i)
{
    int j;
    printf("\n%d", i);
    visited[i] = 1;
    for (j = 0; j< n; j++)
    {
        if (!visited[j] && ar[i][j] == 1)
            dfs(j);
    }
}
int main()
{
    int i, j;
    printf("Enter number of vertices :- ");
    scanf("%d",&n);
    printf("Enter adjecency matrix of the graph :- ");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &ar[i][j]);

    for (i = 0; i < n; i++)
        visited[i] = 0;
    dfs(0);

    return 0;
}