#include<stdio.h>
void main()
{
    int n,m ,a[10],b[10],c[10],k=0;
    printf("Enter the size of set A: ");
    scanf("%d",&n);
    printf("\nEnter the element in set A\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\nEnter the size of set B: ");
    scanf("%d",&m);
    printf("\nEnter the element in set B \n");
    for(int i=0;i<m;i++)
    scanf("%d",&b[i]);
    for(int i=0;i<n;i++)
    {
        int f=0;
        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j])
            f=1;
        }
        if(f==1){
        c[k]=a[i];
        k++;}
        for(int i=1;i<k;i++)
        {
            int r=c[i];
            int j=i-1;
            for(;j>=0;j--)
            {
                if(r<a[j])
                {
                    c[j+1]=c[j];
                }
                else 
                break;
            }c[j+1]=r;
            
        }int w=k;
        for(int i=0;i<k;i++)
        {
            if(c[i]==c[i+1])
            {
                for(w=k;w<k;w++)
            {
                c[i]=c[i+1];
            }k--;
            }
        }
    }
    printf("\nThe inertsetion: ");
    for(int i=0;i<k;i++)
    printf("%d ",c[i]);
}