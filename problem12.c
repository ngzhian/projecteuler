#include <stdio.h>
#include <math.h>

int main() {
    int natural = 1;
    int triangle = 0;
    int num_factors = 0;
    int i;

    while (num_factors < 500) {
        num_factors = 0;
        triangle += natural++;
        for (i = 1; i < sqrt(triangle); i++) {
            if (triangle % i == 0) {
                num_factors += 2;
            }
        }
    }

    printf("%d\n", triangle);
    return 0;
}
