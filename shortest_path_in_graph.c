#include<stdio.h>
#define infi 9999
#define max 10
void dijkstra(int g[max][max],int n,int sv)
{
    int cost[max][max],distance[max],pred[max];
    int visited[max],count,mindistance,nextnode,i,j;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(g[i][j]==0)
            cost[i][j]=infi;
            else
            cost[i][j]=g[i][j];
        }
    }
     for(int i=0;i<n;i++)
    {
        distance[i]=cost[sv][i];
        pred[i]=sv;
        visited[i]=0;
    }
    distance[sv]=0;
    visited[sv]=1;
    count=1;
    while(count<n-1)
    {
        mindistance=infi;
         for(int i=0;i<n;i++)
        if(distance[i]<mindistance&&!visited[i])
        {
            mindistance=distance[i];
            nextnode=i;
        }
        visited[nextnode]=1;
         for(int i=0;i<n;i++)
        if(!visited[i])
        {
            if(mindistance+cost[nextnode][i]<distance[i])
            {
                distance[i]=mindistance+cost[nextnode][i];
            }
        }
        count++;
    }
    for(int i=0;i<n;i++)
    if (i!=sv)
    {
        printf("\n distance of node %d=%d",i,distance[i]);
        printf("\n path=%d",i);
        j=i;
        do{
            j=pred[j];
            printf("<-%d",j);
        }while(j!=sv);
    }
    
    
}
int main()
{
    int g[max][max],i,j,n,sv;
    printf("Enter the no. of vertex :");
    scanf("%d",&n);
    printf("Enter the adjacency matrix :");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d %d :",i,j);
            scanf("%d",&g[i][j]);
        }
    }
    printf("\n Enter the starting vertex :");
    scanf("%d",&sv);
    dijkstra(g,n,sv);
    return 0;

}