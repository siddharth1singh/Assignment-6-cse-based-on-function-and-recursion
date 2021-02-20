///21. Write a recursive function in C to reverse a positive integer.
#include<stdio.h>

int reverse(int n, int r)
{
    printf("reverse(%d, %d)\n", n, r);

    if(n==0) return r;

    return reverse(n/10, r * 10 + n % 10);
}
int main()
{
    int n=


    return 0;
}
