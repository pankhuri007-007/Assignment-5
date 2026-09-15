#include <stdio.h>

int main()
{
    int dd, mm, yy;
    int D;

    printf("Enter day, month and year: ");
    scanf("%d %d %d", &dd, &mm, &yy);

    if (yy > 0) {
        if (mm >= 1 && mm <= 12) {
            if (mm == 2) {
                if (yy % 400 == 0 || (yy % 4 == 0 && yy % 100 != 0)) {
                    D = 29;
                } else {
                    D = 28;
                }
            } else if (mm == 4 || mm == 6 || mm == 9 || mm == 11) {
                D = 30;
            } else {
                D = 31;
            }

            if (dd >= 1 && dd <= D) {
                printf("The date is valid.\n");
            } else {
                printf("Invalid day.\n");
            }
        } else {
            printf("Invalid month.\n");
        }
    } else {
        printf("Invalid year.\n");
    }

    return 0;
}
