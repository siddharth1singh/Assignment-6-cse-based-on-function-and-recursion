///16. Write a recursive function in C to find x^n, where x is a real value, and n is a positive integer.
#include<stdio.h>

 int x = 3, n = 3;

int xPower(int n);


int main()
{

    xPower(n);

    printf("%dPower(%d) = %d", x, n, xPower(n));


    return 0;
}


int xPower(int n)
{
    if(n==0)  return 1;
    if(n==1)  return x;
    if(n==2)  return x*x;

    return x * xPower(n-1);

}
