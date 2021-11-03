#include <stdio.h>
int main()
{
    char name[1000];
    printf("Enter your name:\n");
    gets(name);
    int i, len;
    len = 12;
    printf("%s\n", name);

    for (i = 0; i < len; i++)
    {
        if (name[i] >= 65 && name[i] <= 90)
        {
            name[i] = 'a' + name[i] - 'A';
        }
    }
    printf("%s\n", name);
    return 0;
}
