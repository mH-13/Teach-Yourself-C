// Here I used while to take user input
// While will be true till it takes input from user
// scanf stop taking input if it read a whitespace
// dont need to use & before country
// to exit this program, type CTRL+ Z on your keyboard & hit enter.


#include <stdio.h>
int str_len(char str[])
{
    int i, len = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}
int main()
{
    char country[100];
    int len;
    while (1 == scanf("%s", country))
    {
        len = str_len(country);
        printf("length: %d\n", len);
    }
    return 0;
}
