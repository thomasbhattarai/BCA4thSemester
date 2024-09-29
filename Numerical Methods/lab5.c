#include <stdio.h>
#include <math.h>

#define f(x) (x * log10(x) - 1.2)

int main() {
    float x0, x1, x2, f0, f1, f2, e;
    int step = 1;

    do {
        printf("Enter two initial guesses and tolerable error:\n");
        scanf("%f %f %f", &x0, &x1, &e);
        f0 = f(x0);
        f1 = f(x1);
        if (f0 * f1 > 0.0) {
            printf("Incorrect Initial Guesses. Try again.\n");
        }
    } while (f0 * f1 > 0.0);

    printf("Step\tx0\t\tx1\t\tx2\t\tf(x2)\n");  
    do {
        x2 = x0 - (x0 - x1) * f0 / (f0 - f1);
        f2 = f(x2);
        printf("%d\t%f\t%f\t%f\t%f\n", step, x0, x1, x2, f2);

        if (f0 * f2 < 0) {
            x1 = x2;
            f1 = f2;
        } else {
            x0 = x2;
            f0 = f2;
        }
        step++;
    } while (fabs(f2) > e);

    printf("Root is: %f\n", x2);
    return 0;
}
 