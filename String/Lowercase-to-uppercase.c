#include <stdio.h>
int main()
{
    char country[] = "Bangladesh";
    int i, len;
    printf("%s\n", country);
    len = 10;
    for (i = 0; i < len; i++)
    {
        if (country[i] >= 97 && country[i <= 122])
        {
            country[i] = 'A' + (country[i] - 'a');
        }
    }
    printf("%s\n", country);
    return 0;
}
