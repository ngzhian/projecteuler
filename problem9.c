#include <stdio.h>

int main(void) {
    int a, b, ans;
    for (a = 0; a <= 1000/3; a++) {
        for (b = 0; b <= 1000/2; b++) {
            ans = (a * (1000 - b)) + (1000 * b);
            if  (ans == 500000) {
                printf("found\n");
                printf("%d %d\n", a, b);
                printf("%d\n", a*b*(1000-a-b));
            }
        }
    }

    printf("%d %d\n", a, b);

    return 0;
}
