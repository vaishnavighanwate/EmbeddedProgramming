#include<stdio.h>

void odd(int n);

int main()
{
    int n;
    printf("enter any number");
    scanf("%d",&n);
    odd(n);
    return 0;
}
  
void odd(int n)
{
    for(int i=0;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("odd number is %d\n",i);
        }
    }
}