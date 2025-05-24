#include<stdio.h>

void fibonacci(int n);

int main()
{
    int n;
    printf("enter any number");
    scanf("%d",&n);
    fibonacci(n);
    return 0;

}

  void fibonacci(int n)
  {
    
    int a=0,b=1,c;
    for(int i=0;i<=n;i++)
    {
    printf("%d\n",a);
    c=a+b;
    a=b;
    b=c;
    }
    
  }