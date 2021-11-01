//variable dependent
// need to declare how many element will be there
// counts from 0
// sample: int ara[10]; - will contain 10 element which will be 0-9
// lenth will be 10. ara[9]= 10th element, ara[0]= 1st element.
#include <stdio.h>
int main()
{
    int ara[5] = {1, 2, 3, 4, 5};
    printf("Frist element: %d\n", ara[0]);
    printf("Fourth element: %d\n", ara[3]);
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d th element is %d\n", i + 1, ara[i]);
    }
    return 0;
}
