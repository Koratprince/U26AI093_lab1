#include <stdio.h>

int main() {
    int hours, minutes, seconds;
    long total_seconds;

    printf("Enter hours: ");
    scanf("%d", &hours);
    printf("Enter minutes: ");
    scanf("%d", &minutes);
    printf("Enter seconds: ");
    scanf("%d", &seconds);

    total_seconds = (hours * 3600L) + (minutes * 60L) + seconds;

    printf("Total Seconds = %ld\n", total_seconds);
    return 0;
}
