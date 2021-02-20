#include<stdio.h>

int main()
{

    int n=2001, prime =2;

    for(int i=2;i<23;i++)
    {
        if(n==2)
        {
            printf("%d -> 1\n",n);
             break;
        }
        else if(n%i==0)
        {
            printf("%d -> 0\n",n);
            break;
        }
        else
        {
            printf("%d -> 1\n",n);
            break;
        }
    }

    return 0;
}
