#include<stdio.h>
int n,G[10][10],queue[10],visited[10];
void bfs(int v)
{
	int i,front=0,rear=0;
	for(i=1;i<=n;i++)
	{
		if((!visited[i])&&(G[v][i]==1))
		{
			queue[++rear]=i;
			printf("%d\t",i);
			visited[i]=1;
		}		
	}
	if(front<=rear)
	{
		
		bfs(queue[front++]);
	}
}
void main()
{
	int i,j,s;
	printf("Enter no. of nodes: ");
	scanf("%d",&n);
	printf("Input adjacency matrix: \n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			scanf("%d",&G[i][j]);
	}
	for(i=1;i<=n;i++)
	{
		visited[i]=0;
		queue[i]=0;
	}
	printf("Enter starting vertex: ");
	scanf("%d",&s);
	printf("%d\t",s);
	visited[s]=1;
	bfs(s);
	
	
}
/*
0 1 0 1 1 0 0
1 0 1 0 0 1 1
0 1 0 0 0 0 0
1 0 0 0 0 0 0
1 0 0 0 0 0 0
0 1 0 0 0 0 0
0 1 0 0 0 0 0
*/
