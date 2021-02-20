///10. Write a function in C that takes a real number as an argument and returns that number's absolute value.
#include<stdio.h>

int mod(int n);



int main()
{
    int n= -56;
    mod(n);
    printf("mod(%d)=%d", n, mod(n));

    return 0;
}



int mod(int n)
{
    if(n==0)
        return 0;
    if(n<0)
        return -1 * n;

    return n;

}

