///4. Write a function in C to print all prime numbers inside a given range [a,b]. You need to pass a and b as parameters to the function.
#include<stdio.h>

int primeInRange(int a, int b)
{
    int f;
    for (int j=a; j<=b; j++)
    {
        f=1;
        for(int i=2; i<j; i++)
        {
            if(j%i==0)
            {
                f = 0;
                break;
            }
        }
        if(j==1)
        {

        }
        else if (f == 1)
        {
            printf("%d  is prime\n",j);
            ///break;
        }
    }

    return 0;
}

int main()
{
    int a=10, b=20;
    primeInRange(a, b);


    return 0;
}
