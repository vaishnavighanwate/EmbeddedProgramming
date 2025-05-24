#include<stdio.h>

void table(int n);

int main()
{
    int a;
    printf("enter any  number");
    scanf("%d",&a);
    table(a);
    return 0;

}
  
void table(int n)
{
    int mul;
    for(int i=1;i<=10;i++)
    {
       mul=i*n;
       printf(" %d\n",mul);
    }
    
}