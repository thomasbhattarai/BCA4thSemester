#include <stdio.h>
#include <math.h>

#define f(x) (cos(x) - 3 * x + 1)
#define g(x) ((1 + cos(x)) / 3)

int main() {
    int step = 1, N;
    float x0, x1, e;

    printf("Enter initial guess, tolerable error, and maximum iteration:\n");
    scanf("%f %f %d", &x0, &e, &N);

    printf("Step\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
    do {
        x1 = g(x0);
        printf("%d\t%f\t%f\t%f\t%f\n", step, x0, f(x0), x1, f(x1));
        x0 = x1;
        step++;

        if (step > N) {
            printf("Not Convergent.\n");
            return -1;
        }
    } while (fabs(f(x1)) > e);

    printf("Root is %f\n", x1);
    return 0;
}
