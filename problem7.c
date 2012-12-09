#include <stdio.h>
#include <math.h>

#define LIMIT 10000000
#define MAGIC 10001

int prime(int n);

int main(void) {
    int count = 3;
    int ans;
    for (ans = 5; ans < LIMIT && count <= MAGIC; ans+=2) {
        if (prime(ans)) {
            //printf("%d th prime is %d\n", count, ans);
            count++;
        }
    }
    ans -= 2;
    printf("ans: %d\n", ans);

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
