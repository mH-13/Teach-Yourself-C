//Check if n is 2 or not, if its 2 then its a prime number
//we could chek 3 to n/2 , but thats not necessry. Because if we check the root of n, it will be enough.
//math. h is a header file for using sqrt()
//Here we are ignoring all the even number.


#include <stdio.h>
#include <math.h>

int is_prime(int n)
{
    int i, root;
    if (n == 2)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        return 0;
    }
    root = sqrt(n);
    for (i = 3; i <= root; i = i + 2)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n, m;
    while (1)
    {
        printf("Please enter any number(Enter 0 to exit):   ");
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        if (1 == is_prime(n))
        {
            printf("%d is a prime number.\n", n);
        }
        else
        {
            printf("%d is not a prime number.\n", n);
        }
    }
    return 0;
}
