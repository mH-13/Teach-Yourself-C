//variable dependent
// need to declare how many element will be there
// counts from 0
// sample: int ara[10]; - will contain 10 element which will be 0-9
// lenth will be 10. ara[9]= 10th element, ara[0]= 1st element.
#include <stdio.h>
int main()
{
    int ara[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i, j, temp;
    
    //for (i = 0, j = 9; i < 10; i++, j--)
    //if i<10 in conditon, then it will reverse the array twice.
    //follow n/2 or i<j condition to solve

    for (i = 0, j = 9; i < j; i++, j--)
    {
        temp = ara[j];
        ara[j] = ara[i];
        ara[i] = temp;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", ara[i]);
    }
    return 0;
}
