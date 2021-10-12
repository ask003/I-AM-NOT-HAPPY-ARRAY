
#include <stdio.h>

int main()
{
     int n,num,pos;
    printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d",&n);
    int a[n+1];
    printf("ENTER THE ARRAY: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENTER THE NUMBER TO BE REMIVED: ");
    scanf("%d",&num);
    for(int i=0;i<n;i++)
    {
        if(num==a[i])
        {
            pos = i;
        }
    }
    for(int i=pos;i<n-1;i++)
    {
        a[i] = a[i+1];
    }
    for(int i=0;i<n-1;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
