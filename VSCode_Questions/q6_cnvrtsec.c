#include <stdio.h>

void convertSeconds(int totalSeconds)
{
    int hours, minutes, seconds;

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("%d %d %d\n", hours, minutes, seconds);
}

int main()
{
    int totalSeconds;

    scanf("%d", &totalSeconds);

    convertSeconds(totalSeconds);

    return 0;
}
