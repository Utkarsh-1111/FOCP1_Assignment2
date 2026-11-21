#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    if (a < 0)
        a = -a;

    return a;
}

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d\n", gcd(a, b));

    return 0;
}
