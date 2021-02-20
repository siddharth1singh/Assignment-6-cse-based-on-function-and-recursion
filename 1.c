///1 Write a function in C to compute the area of a circle.You need to pass the diameter of the circle as a parameter to the
///function.Write the main function and call it from the main function. You need to deﬁne the function before the main function.
#include<stdio.h>

float area(int d)
{
    int r = d/2;
    return 3.14 * r * r;
}
int main()
{
    int d=4;
    area(d);

    printf("The area of circle by passing the diameter is %g",area(d));

    return 0;
}
