//this code will conintue to take string input untill it manually exit.
// to exit, CTRL + Z & hit enter
#include <stdio.h>
int main()
{
    char ara[1000];
    while (NULL != gets(ara))
    {
        printf("%s\n", ara);
    }
    return 0;
}
