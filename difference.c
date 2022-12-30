#include<stdio.h>
void main()
{
    int i,j,n,m,a[10],b[10],c[20],f=0,k=0;
    printf("Enter the size of set A :");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter the %d element in set A :",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the size of set B :");
    scanf("%d",&m);
    for ( i = 0; i < m; i++)
    {
        printf("Enter the %d element in set m :",i+1);
        scanf("%d",&b[i]);
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            if (a[i]!=b[j])
            {
                f=1;
                continue;
            } 
            else{
                f=0;
                break;
            }
        } 
        if (f==1)
        {
            c[k]=a[i];
            k++;
        }f=0;
         
    }
    printf("The difference are :");
    for ( i = 0; i < k; i++)
    {
        printf("%d ",c[i]);
    }
}