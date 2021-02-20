///5. Write a function in C to print all Strong numbers inside a given range [a,b]. You need to pass a and b as parameters to the function.

///Strong number is a special number whose sum of the factorial of digits is equal to the original number.
/// For Example: 145 is strong number.
#include<stdio.h>

int fact(int n);

int  isstrong(int a, int b)
{
    int s, p=1, q;
    for(int i=a; i<=b; i++)
    {
        p = i;
        s=0;
        for(; p;)
        {
            q = p%10;
            s = (s + fact(q));
            p = (p / 10);
        }
        ///printf("%d Hello",p);
        ///printf("\n%d Hello",s);
        if(s==i)
        {
            printf("\n%d is a strong number",s);
        }
    }
    return 0;
}
int main()
{
    int n=3, high =146, low =140;

    isstrong(low, high);

    return 0;
}

int fact(int n)
{
    if(n==0)
        return 1;
    if(n==1)
        return 1;
    if(n==2)
        return 2;

   return n * fact(n-1);

}
