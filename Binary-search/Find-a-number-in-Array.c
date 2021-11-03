#include <stdio.h>
int main()
{
    int ara[] = {2, 4, 6, 8, 9, 11, 46, 48, 57, 65, 70, 78, 85, 96, 100};
    int low_index = 0;
    int high_index = 16;
    int mid_index;
    int num = 70;
    while (low_index < high_index)
    {
        mid_index = (low_index + high_index) / 2;
        if (num == ara[mid_index])
        {
            break;
        }
        if (num < ara[mid_index])
        {
            high_index = mid_index - 1;
        }
        else
        {
            low_index = mid_index + 1;
        }
    }
    if (low_index > high_index)
    {
        printf("%d is not in the array.\n", num);
    }
    else
    {
        printf("%d is found in the array. It is the %d th element of the array.\n", ara[mid_index], mid_index);
    }
    return 0;
}
