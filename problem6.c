#include <stdio.h>

int main(void) {
    long long int sumofsquares = 0, squareofsum = 0, sum = 0;
    int limit = 100;
    sum = limit / 2 * (limit + 1);
    sumofsquares = limit * (2 * limit + 1) * (limit + 1) / 6;
    squareofsum = sum * sum;
    printf("%lld\n", squareofsum - sumofsquares);
    return 0;
}
