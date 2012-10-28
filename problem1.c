#include <stdio.h>

int main(void) {
    int i, j;
    int sum3 = 0;
    int sum5 = 0;
    for (i = 3; i < 1000; i+=3) {
        sum3 += i;
    }
    for (j = 5; j < 1000; j += 5) {
        if (j % 3 != 0)
            sum5 += j;
    }
    
    printf("total: %d", sum3+sum5);
    
    return 0;
}
