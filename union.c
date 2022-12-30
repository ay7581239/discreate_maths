#include<stdio.h>
void main()
{
    int a[20],n,i,j,b[20],k,c[20],s=0;
    printf("Enter the size of set a : ");
    scanf("%d",&n);
    printf("Enter the element in set a\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Enter the size of set b : ");
    scanf("%d",&k);
     printf("Enter the element in set b\n");
    for ( i = 0; i < k; i++)
    {
        scanf("%d",&b[i]);
    }
    for ( i = 0; i < n; i++)
    {
        c[s]=a[i];s++;
    }
    for ( i = 0; i < k; i++)
    {
        int fl=0;
        for (j = 0; j < n; j++)
        {
            if(b[i]==a[j])
           { 
            fl=1;
           break; 
            }
        }
        if(fl==0)
        {
            c[s]=b[i];
            s++;
        }
    }
    printf("\nthe union is: ");
     for ( i = 0; i < s; i++)
    {
        printf("%d ",c[i]);
    }
    
}