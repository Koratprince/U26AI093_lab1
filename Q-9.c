#include <stdio.h>

int main() {
    float m, p, c, e, cm;

    printf("Enter marks in Mathematics (out of 200): ");
    scanf("%f", &m);
    printf("Enter marks in Physics (out of 200): ");
    scanf("%f", &p);
    printf("Enter marks in Chemistry (out of 200): ");
    scanf("%f", &c);
    printf("Enter marks in Entrance Exam (out of 100): ");
    scanf("%f", &e);

    cm = (m / 2.0) + (p / 2.0) + (c / 2.0) + e;

    printf("\nCut-Off Mark = %.2f / 400.00\n", cm);
    return 0;
}
