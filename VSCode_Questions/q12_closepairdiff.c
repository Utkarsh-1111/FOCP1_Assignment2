#include <stdio.h>
#include <limits.h>

int main()
{
    int n, a[1000];
    long long minDiff = LLONG_MAX;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            long long diff = (long long)a[i] - a[j];

            if (diff < 0)
            {
                diff = -diff;
            }

            if (diff < minDiff)
            {
                minDiff = diff;
            }
        }
    }

    printf("%lld\n", minDiff);

    return 0;
}
