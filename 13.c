///13. Write a recursive function in C to find the factorial of a positive integer.
#include<stdio.h>


int fact(int n);


int main()
{
    int n=5;

    fact(n);

    printf("fact(%d) = %d", n, fact(n));


    return 0;
}


int fact(int n)
{
    if(n==0)  return 1;
    if(n==1)  return 1;
    if(n==2)  return 2;

    return n * fact(n-1);

}
