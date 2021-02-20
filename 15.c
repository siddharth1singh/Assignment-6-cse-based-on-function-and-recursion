///15. Write a recursive function in C to find the i th number in the Fibonacci sequence.
#include<stdio.h>


int fibo(int n);


int main()
{
    int n=5;

    fibo(n);

    printf("fibo(%d) = %d", n, fibo(n));


    return 0;
}


int fibo(int n)
{
    if(n==1)  return 0;
    if(n==2)  return 1;
    //if(n==3)  return 1;

    return (fibo(n-1) + fibo(n-2));

}
