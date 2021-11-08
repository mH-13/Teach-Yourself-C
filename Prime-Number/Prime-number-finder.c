//This code is for finding a prime number after fixing a range. 
//Here, I tried to find prime numbers between 2 to 40. You can set any limit and then check wheather it is prime or not.
// print_ara() is used for showing how things works here.

#include <stdio.h>
#include <math.h>

const int size = 40;
int ara[40];
void print_ara()
{
    int i;
    for (i = 2; i < size; i++)
    {
        printf("%4d", ara[i]);
    }
    printf("\n");
    for (i = 2; i < size; i++)
    {
        printf("----");
    }
    printf("\n");
    for (i = 2; i < size; i++)
    {
        printf("%4d", i);
    }
    printf("\n\n\n");
}

void sieve()
{
    int i, j, root;
    for (i = 2; i < size; i++)
    {
        ara[i] = 1;
    }
    root = sqrt(size);
    print_ara();
    for (i = 2; i < root; i++)
    {
        if (ara[i] == 1)
        {
            for (j = 2; i * j <= size; j++)
            {
                ara[i * j] = 0;
            }
            print_ara();
        }
    }
}

int is_prime(int n)
{
    int i;
    if (n < 2)
    {
        return 0;
    }
    return ara[n];
}

int main()
{
    int n, m;
    sieve();
    while (1)
    {
        printf("Please enter a number(enter 0 for exit): ");
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        if (n >= size)
        {
            printf("The number should be less then %d\n", size);
            continue;
        }
        if (1 == is_prime(n))
        {
            printf("%d is a damn prime number.\n", n);
        }
        else
        {
            printf("%d is not a freaking prime number.\n", n);
        }
    }
    return 0;
}
