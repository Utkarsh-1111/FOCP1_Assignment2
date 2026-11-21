#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int count = 1;

    scanf("%999s", str);

    int n = strlen(str);

    for (int i = 0; i < n; i++)
    {
        if (i < n - 1 && str[i] == str[i + 1])
        {
            count++;
        }
        else
        {
            printf("%c%d", str[i], count);
            count = 1;
        }
    }

    printf("\n");

    return 0;
}
