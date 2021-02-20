///2. Write a function in C to check whether a number is prime or not.If it is a prime number, the function should return 1.
///Otherwise, it should return 0. Write the main function and call the function from the main function.
///You need to define the function after the main function and declare the function inside the main function.
#include<stdio.h>


int isPrime(unsigned int n)
{
   for(int i=2;i<n;i++)
   {
       if(n==0||n==1)
       {
           printf("we cant say");
           break;
       }
       if(n==2)
       {
           printf("1");
           break;
       }
        if(n%i==0)
       {
           printf("0");
           break;
       }
       else
       {
           printf("1");
           break;
       }
   }
}
int main()
{
    unsigned int n=3;

    isPrime(n);

    return 0;
}
