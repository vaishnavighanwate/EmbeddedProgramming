#include<stdio.h>

int sum(int a,int b);

int main()
{
    int a ,b,add;
    printf("enter any two number");
    scanf("%d %d",&a,&b);
    add=sum(a,b);
    printf("sum is %d",add);
    return 0;
}
   int sum(int a,int b)
   {
     return a+b;
   }
