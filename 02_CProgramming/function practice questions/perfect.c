#include<stdio.h>

void perfect(int n);

int main()
{
    int n;
    printf("enter any number");
    scanf("%d",&n);
    perfect(n);
    return 0;
}

  void perfect(int n)
  {
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("perfect number");
    }
    else{
        printf("not the perfect number");
    }
  }