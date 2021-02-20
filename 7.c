///7. Write a function in C to print all Perfect numbers inside a given range [a,b]. You need to pass a and b as parameters to the function.
/// a perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself.
///For instance, 6 has divisors 1, 2 and 3, and 1 + 2 + 3 = 6, so 6 is a perfect number
#include<stdio.h>


int isPerfect(int a, int b)
{
    int s;
    for(int i=a; i<=b; i++)
    {
         s=0;
        for(int j=1; j<i; j++)
        {
            if(i%j==0)
            {
                s += j;
            }

        }
        if(s==i)
        {
            printf("%d is a perfect number\n",s);
        }
    }

    return 0;
}
int main()
{
    int low=1, high=30;
    isPerfect(low, high);
    return 0;
}
