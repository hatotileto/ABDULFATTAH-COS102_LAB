#include <cstdio>

int main() {
    double angle1, angle2, angle3;

    printf("Enter the first angle of the triangle: ");
    scanf("%lf", &angle1);
    printf("Enter the second angle of the triangle: ");
    scanf("%lf", &angle2);

    if (angle1 <= 0 || angle2 <= 0 || (angle1 + angle2) >= 180) {
        printf("Error: Invalid angles. A triangle's angles must be positive "
               "and sum to 180 degrees.\n");
    } else {
        angle3 = 180.0 - (angle1 + angle2);

        if (angle1 == 90 || angle2 == 90 || angle3 == 90) {
            printf("Result: The triangle IS a right-angled triangle "
                   "(Third angle = %.2f degrees).\n",
                   angle3);
        } else {
            printf("Result: The triangle is NOT a right-angled triangle "
                   "(Third angle = %.2f degrees).\n",
                   angle3);
                }
    }

    return 0;
}
