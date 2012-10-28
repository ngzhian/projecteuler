#include <stdio.h>
#define MAX 4000000

int main(void) {
    int sum = 0;
    int prev = 1, cur = 2, temp;
    while (cur < MAX) {
        if (cur % 2 == 0) {
            sum += cur;
        }
        temp = cur;
        cur += prev;
        prev = temp;
        
    }
    printf("Sum: %d\n", sum);
    return 0;
}
