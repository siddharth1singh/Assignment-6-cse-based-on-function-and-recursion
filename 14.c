///14. Write a recursive function in C to find the summation of the first n natural numbers.
#include<stdio.h>


int sumNatural(int n);


int main()
{
    int n=10000;

    sumNatural(n);

    printf("sumNatural(%d) = %d", n, sumNatural(n));


    return 0;
}


int sumNatural(int n)
{
    if(n==0)  return 0;
    if(n==1)  return 1;
    if(n==2)  return 3;

    return n + sumNatural(n-1);

}
