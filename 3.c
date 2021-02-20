///3. Write a function in C to check whether a number is Armstrong or not. If it is an Armstrong number, the function should return 1. Otherwise, it should return 0. Write the main function and call the function from the main function. You need to deﬁnethefunctionafterthemainfunctionanddeclarethefunctionoutside(before) the main function.
///153 = 1*1*1+5*5*5+3*3*3
#include<stdio.h>


int isArmstrong(int n)
{
    int m=n;
    int s=0;
    for(;m;)
    {
       s += (m%10)*(m%10)*(m%10);
       m /= 10;
    }
    if(s==n)
    {
        printf("it is armstrong number");
    }
    else
    {
        printf("it is not armstrong number");
    }
    return s;
}
int main()
{
    int n=407;

    isArmstrong(n);


    return 0;
}
