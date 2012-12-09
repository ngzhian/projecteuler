#include <stdio.h>
#include <math.h>

#define LIMIT 2000000

int prime(int n);

int main(void) {
    int sievebound = LIMIT / 2;
    int sieve[LIMIT/2];
    int i, j;

    for (i = 2; i < sqrt(LIMIT); i++) {
        for (j = 1; j;;);
    }

    return 0;
}

int prime(int n) {
    int i;
    if (n%2 == 0) {
        return 0;
    }
    for (i = 3; i <= sqrt(n); i+=2) {
        if (n%i == 0)
            return 0;
    }
    return 1;
}
