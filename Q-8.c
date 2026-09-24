#include <stdio.h>

int main() {
    int total_seconds = 31558150;
    int remaining_seconds;
    int days, hours, minutes;

    days = total_seconds / 86400;
    remaining_seconds = total_seconds % 86400;

    hours = remaining_seconds / 3600;
    remaining_seconds = remaining_seconds % 3600;

    minutes = remaining_seconds / 60;

    printf("Total seconds: %d\n", total_seconds);
    printf("Converted time: %d Days, %d Hours, and %d Minutes\n", days, hours, minutes);
    return 0;
}
