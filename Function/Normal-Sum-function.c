#include <stdio.h>

//add fucntion
//If we put add function after the main function, then wee need to write the prototype of add function before main()

double add(double x, double y);
int main()
{
    double a, b, c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    c = add(a, b);
    printf("Sum is %0.2lf\n", c);
    return 0;
}
double add(double n1, double n2)
{
    double sum = n1 + n2;
    return sum;
}
