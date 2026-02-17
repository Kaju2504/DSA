#include <stdio.h>
int main ()
{
    int a[5];
    int x,i;
    int f=0;
    printf("enter 5 number:");
    for(i=0;i<5;i++)
    {
        scanf("%d",& a [i]);
    }
    printf("enter the element to be search:");
    scanf("%d",&x);
    for(i=0;i<5;i++)
    {
        if(a[i]==x)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("found at %d",i);
    }
    else
    {
        printf(" not foung");
    }
} 
    
