#include<stdio.h>

void armstrong(int n);    // Armstrong Number

int main()
{
    int n;
    printf("enter any number");
    scanf("%d",&n);
    armstrong(n);
    return 0;
}

  void armstrong(int n)
  {
    int rem,cube,temp=n,sum=0;
    while(n>0)
    {
    rem=n%10;
    cube=rem*rem*rem;
    sum=sum+cube;
    n=n/10;
    }

  
  n=temp;
  if(n==sum)
  {
    printf("it is armstrong number");
  }
  else
  printf("not an armstrong number");
}