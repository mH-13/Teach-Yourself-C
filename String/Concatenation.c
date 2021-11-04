#include <stdio.h>
int main()
{
    char str1[] = "Bangla", str2[] = "desh", str3[] = ".", str4[12];
    int i, j, len1 = 6, len2 = 4, len3 = 1;
    for (i = 0, j = 0; i < len1; i++, j++)
    {
        str4[j] = str1[i];
    }
    for (i = 0, j = 0; i < len2; i++, j++)
    {
        str4[j] = str2[i];
    }
    for (i = 0, j = 0; i < len3; i++, j++)
    {
        str4[j] = str3[i];
    }
    str4[j] = '\0';
    printf("%s\n", str4);
    return 0;
}
