#include <stdio.h>
#include <cstring>

int find_max(int ara[], int n)
{
    int max = ara[0];
    int i;
    for (i = 1; i < n; i++)
    {
        if (ara[i] > max)
        {
            max = ara[i];
        }
    }
    return max;
}

int find_min(int ara[], int n)
{
    int min = ara[0];
    int i;
    for (i = 0; i < n; i++)
    {
        if (ara[i] < min)
        {
            min = ara[i];
        }
    }
    return min;
}
int main()
{
    int ara[] = {5, 7, 6, 30, 12, 20};
    int n = 6;
    int max = find_max(ara, n);
    int min = find_min(ara, n);

    printf("%d is the largest number.\n", max);
    printf("%d is the smallest number.\n", min);

    return 0;
}
