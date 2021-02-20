///17. Write a recursive function in C to find the sum of all even numbers in a given range.
#include<stdio.h>


int sumEven(int a, int b)
{
    if(a>b)
        return 0;

    if((a==b)&&(a%2==0))
        return a;

    if(a%2 != 0)
        return sumEven(a+1, b);

    return (a + sumEven(a+2, b));
}

int main()
{
    int a = 1, b = 7;

    printf("%d\n",sumEven(a, b));
    printf("Hello\n");

    return 0;
}

