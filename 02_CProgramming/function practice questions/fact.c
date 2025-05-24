#include<stdio.h>

void fact(int n);


int main()
{
    int a;
    printf("enter any number");
    scanf("%d",&a);
    fact(a);
    return 0;   

}
void fact(int n)
{
    int fact;
    for(int i=1;i<=n;i++)
    {
        fact=n*n;
        
    }
    printf("factrial is %d",fact);
}