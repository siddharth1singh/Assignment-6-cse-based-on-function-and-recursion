///6. Write a function in C to print all Armstrong numbers inside a given range [a,b]. You need to pass a and b as parameters to the function.
///153 = 1*1*1+5*5*5+3*3*3
#include<stdio.h>

int isArmstrong(int a, int b)
{
    int s, p=1, q;
    for(int i=a; i<=b; i++)
    {
        p = i;
        s=0;
        for(; p;)
        {
            q = p%10;
            s = (s + (q*q*q));
            p = (p / 10);
        }
        ///printf("%d Hello",p);
        ///printf("\n%d Hello",s);
        if(s==i)
        {
            printf("\n%d is a armstrong number",s);
        }
    }
    return 0;
}
int main()
{
    int n=3, high =156, low =150;

    isArmstrong(low, high);

    return 0;
}

