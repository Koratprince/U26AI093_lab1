#include <stdio.h>

int main()
{
    int basic, hra, da, allowance, gross;

    printf("Enter Basic Salary: ");
    scanf("%d", &basic);

    printf("Enter HRA: ");
    scanf("%d", &hra);

    printf("Enter DA: ");
    scanf("%d", &da);

    printf("Enter Other Allowance: ");
    scanf("%d", &allowance);

    gross = basic + hra + da + allowance;

    printf("Gross Salary = %d", gross);
    return 0;
}
