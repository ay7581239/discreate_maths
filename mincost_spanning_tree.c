#include<stdio.h>
int arr[10][10],n,r[10],ne=1;
int a,b,u,v,i,j,min,mincost=0;
int find(int i)
{
    while(r[i])
    {
        i=r[i];
    }
    return i;
}
int uni(int i,int j)
{
    if(i!=j)
    {
        r[j]=i;
        return 1;
    }
    return 0;
}
int main()
{
    printf("Enter the no. of vertex :");
    scanf("%d",&n);
    printf("\n enter mincost:");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d %d :",i,j);
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==0)
            arr[i][j]=999;
        }
    }
    while(ne<n)
    {
        for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(arr[i][j]<n)
            {
                min=arr[i][j];
                a=u=i;
                b=v=j;
            }
        }
    }
    u=find(u);
    v=find(v);
    if(uni(u,v))
    {
        printf("\n%d edge (%d %d)=%d",ne,a,b,min);
        ne++;
        mincost+=min;
    }
    arr[a][b]=arr[b][a]=999;
    }
    printf("mincost %d",mincost);
    return 0;
}