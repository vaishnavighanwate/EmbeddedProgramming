#include<stdio.h>

void even(int n);

int main()
{
    int n;
    printf("enter any number");
    scanf("%d",&n);
    even(n);
    return 0;
}

 void even(int n)
 {
for(int i=1;i<=n;i++)
{
    if(i%2==0)
    {
        printf("even number is %d\n",i);
    }

}
 }