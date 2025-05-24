#include<stdio.h>

 void evencheck(int n);

 int main()
 {
    int n;
    printf("enter any number");
    scanf("%d",&n);
    evencheck(n);
    return 0;
 }

  void evencheck(int n)
  {
        if(n%2==0)
        {
            printf("even number");
        }
        else 
        {
            printf("odd number");
        }
    }
  