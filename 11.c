///11. Write a function in C that takes a positive integer n as an argument and returns the largest power of two greater than or equal to n.
#include<stdio.h>

int largestPowerOf2(int n)
{
    int count = 1;
    while(count<n)
        {
            if(count>n)
            {
                return count;
            }
            else  count *= 2;
        }

    return count;
}

int main()
{
    int n=30;
    int largestPowerOf2(int n);
    printf("%d",largestPowerOf2(n));

    return 0;
}

