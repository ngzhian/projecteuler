#include <stdio.h>
#define MAX 10
#define MIN 1

//int test(int n);

int main(void) {
    long long int n = 1;
    int i;
    /*
    for (i = MIN; i <= MAX; i++) {
        printf("%lld %% %d = %lld\n", n, i, n%i);
        if (n%i != 0) {
            n *= i;
            printf("new n: %lld\n", n);
        }
    }
    */
    i = 0;
    n = 2*3*2*5*7*2*3*11*13*2*17*19;
    printf("n: %lld\n", n);
    printf("test\n");
    //test(n); 
    return 0;
}
/*

int test(int n) {
    int i;
    for (i = MIN; i <= MAX; i++) {
        printf("%d %% %d = %d\n", n, i, n%i);
    }
    return 0;
}

*/
