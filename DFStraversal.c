#include <stdio.h>

int ar[10][10], visited[10] = {0}; // intialize visited stack as 0 
int n;

void dfs(int i,int j)
{
    
    printf("\n%d", i);
    visited[i] = 1;
    for (j=0; j<n; j++)   
    {
        if (!visited[j] && ar[i][j] == 1)
            dfs(j,j);
    }
}
int main()
{
    int i, j;
    printf("Enter number of vertices :- ");
    scanf("%d",&n);
    printf("Enter adjecency matrix of the graph :- \n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &ar[i][j]);

    dfs(0,0);

    return 0;
}