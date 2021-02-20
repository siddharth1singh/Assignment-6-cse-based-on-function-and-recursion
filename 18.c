///18. Write a recursive function in C to find the sum of all odd numbers in a given range.
#include<stdio.h>

int n=0;
int sumOdd(int a, int b);

int main()
{
    int a = 3, b = 10;

    printf("%d ",sumOdd(a, b));

    return 0;
}

int sumOdd(int a, int b)
{
    if(a>b) return 0;
    if(a==b && a%2==1) return a;

    if(a%2 == 0)   return sumOdd(a+1, b);

    return a + sumOdd(a+2, b);
}
