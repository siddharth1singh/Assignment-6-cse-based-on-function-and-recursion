///9. Write a function in C that takes three integers as arguments and returns the largest ones value.
#include<stdio.h>


int max(int a, int b, int c)
{
    if((a>b)&&(a>c))
    {
        return a;
    }
    else if((b>a)&&(b>c))
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    int a=2, b=3, c=4;

    max(a, b, c);

    printf("%d",max(a, b, c));

    return 0;
}


