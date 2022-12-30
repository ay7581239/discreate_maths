#include<stdio.h>
void main()
{
    int n,a[10];
    printf("Enter the size of set A: ");
    scanf("%d",&n);
    printf("\nEnter the element in set A\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int m=1;
    for(int i=0;i<n;i++)
    m=m*2;
    printf("The power of set are : { ");
    for(int i=0;i<m;i++)
    {
        printf("(");
        for(int j=0;j<n;j++)
        {
            if(i&1<<j)
            printf("%d",a[j]);
        }printf(")");
    }printf("}");
}