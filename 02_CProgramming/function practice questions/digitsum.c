#include<stdio.h>

int sumofdigit(int n);

int main()
{   
    int n;
       printf("enter any number");
       scanf("%d",&n);
    int add=sumofdigit (n);
   printf("sum of digit is %d",add);
    return 0;
  
}
 int sumofdigit(int n)
 {
    int rem ,sum=0;
    while(n>0)
    {
        
    rem=n%10;
    sum=sum+rem;
    n=n/10;
    }
    return sum;
 }
   