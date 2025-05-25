#include<stdio.h>

enum Day {
    sunday,
    monday,
    tuesday,
    wednesday,
    thurseday,
    friday,
    saturday,
};
int main()
{
    enum Day today=monday;

    if(today==monday)
    {
        printf("it' s wednesday\n");

    }
    return 0;
}
