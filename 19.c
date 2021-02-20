///19. Write a recursive function in C to find the number of digits in a positive integer.
#include<stdio.h>

int numberOfDigit(int n);

int main()
{
    int n=24589;

    numberOfDigit(n);

    printf("number of digit in %d is %d", n, numberOfDigit(n));


    return 0;
}

int numberOfDigit(int n)
{
    int p=n, q=0;
    for(; p;)
    {
        q += 1;
        p /= 10;
    }
    return q;
}
