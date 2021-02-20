///12. Write a function in C that takes a positive integer as input and returns the leading digit in its decimal representation. For example, the leading digit of 234567 is 2.

#include<stdio.h>

int leadingDigit(int n);

int main()
{
    int n=459687;

    leadingDigit(n);

    printf("leading digit in %d is %d", n, leadingDigit(n));


    return 0;
}


int leadingDigit(int n)
{
    int p = n, q=1;
    for(; p;)
    {
        q = p % 10;
        p = p/10;
    }
    return q;

}
