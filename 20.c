///20. Write a recursive function in C to find the sum of digits in a positive integer.
#include<stdio.h>

int q=0;
int sumOfDigit(int n);

int main()
{
    int n=24;

    sumOfDigit(n);

    printf("sum of digit in %d is %d", n, sumOfDigit(n));

    return 0;
}

int sumOfDigit(int n)
{
    q = n%10;

    return q + sumOfDigit(n/10);
}
