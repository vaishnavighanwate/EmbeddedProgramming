#include<stdio.h>
   
void primecheck(int n);

int main()
{
    int n;
    printf("enter any number");
    scanf("%d",&n);
    primecheck(n);
    return 0;

}

   void primecheck(int n)
   {
    int count=0;
    for(int i=1;i<=n;i++)
    {
    if(n%i==0)
    {
        count++;
    }
}
    if(count==2)
    {
        printf("prime number");

    }
    else{
        printf("not the prime");
    }

   }