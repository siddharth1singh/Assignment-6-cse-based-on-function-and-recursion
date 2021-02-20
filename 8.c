///8. Write a function in C to find the minimum of two numbers.
#include<stdio.h>


int minimum(int a, int b)
{
    if(a>b)
    {
        return b;
    }
    else if(a<b)
    {
        return a;
    }
}
int main()
{
    int n=2;

    int s=minimum(5, 10);

    printf("%d",s);

    return 0;
}
