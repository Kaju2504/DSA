#include<stdio.h>
#define n 4
int Q[n];
int f=-1, r=-1;
void Eq(int x)
{
    if(f==(r+1)%n)
    {
        printf("Overflow\n");
    }
    else{
        if(r==-1){
            f=r=0;
            Q[r]=x;
            printf("%d element inserted in queue\n",x);
        }
        else{
            r=(r+1)%n;
            Q[r]=x;
            printf("%d element inserted in queue\n",x);
        }
    }
}
void DQ()
{
    int y;
    if(f==-1)
    {
        printf("underflow\n");
    }
    else
    {
    y=Q[f];
     if(f==r)
         {
            f=r=-1;
         }
            else
            {
                f=(f+1)%n;
            }
                printf("%d  element deleted from queue\n",y);
             }
        }
        int main()
        {
            EQ(1);
            EQ(2);
            EQ(3);
            EQ(4);
            DQ();
        }
    