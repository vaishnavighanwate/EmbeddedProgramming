#include<stdio.h>

void palindrome(int n);
int main()                         // palindrome number if the reverse of thr number is equal to the original number
{
    int n;
    printf("enter any number");
    scanf("%d",&n);
    palindrome(n);
    return 0;
}

  void palindrome(int n)
  {
    int rem,sum=0,original=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum*10+rem; 
        n=n/10;  
  }
   n=original;
  if(n==sum)
  printf("palindrome number");
  else
  printf("not the palindrome");
}