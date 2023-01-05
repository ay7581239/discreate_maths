#include<stdio.h>
void main()
{
    int n[20][2];
    printf("Enter the input in 0/1 : ");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            //printf("%d %d :"j,j);
            scanf("%d",&n[i][j]);
            //printf("\n");
        }
    }
    printf("\nAND gate:");
    
    for(int i=0;i<4;i++)
    {
       int j=0;
       if(n[i][j]&&n[i][j+1])
       {
        printf("\n%d %d : 1",n[i][j],n[i][j+1]);
       }
       else
       {
        printf("\n%d %d : 0",n[i][j],n[i][j+1]);
       }
    }
    printf("\nOR gate:");
    
    for(int i=0;i<4;i++)
    {
       int j=0;
       if(n[i][j]||n[i][j+1])
       {
        printf("\n%d %d : 1",n[i][j],n[i][j+1]);
       }
       else
       {
        printf("\n%d %d : 0",n[i][j],n[i][j+1]);
       }
    }
    printf("\nNOT gate: ");
    for(int i=0;i<2;i++)
    {
        if(i==1)
        printf("\n%d :%d",i,0);
        else
        printf("\n%d :%d",i,1);
    }

}