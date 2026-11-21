#include <stdio.h>

int main()
{
    int r, c, a[100][100];

    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int found = 1;

            for (int k = 0; k < c; k++)
            {
                if (a[i][j] > a[i][k])
                {
                    found = 0;
                }
            }

            for (int k = 0; k < r; k++)
            {
                if (a[i][j] < a[k][j])
                {
                    found = 0;
                }
            }

            if (found == 1)
            {
                printf("%d %d %d\n", i, j, a[i][j]);
                return 0;
            }
        }
    }

    printf("None\n");

    return 0;
}
