#include <stdio.h>
#include <string.h>

#define MAX 999
#define MIN 100

int itostr(int n, int str[]);
int isPalindrome(int str[], int length);

int main(void) {
    int a, b, largest = 0, pdt, length;
    int pdt_str[15];
    for (a = MAX; a >= MIN; a--) {
        for (b = MAX; b >= MIN; b--) {
            pdt = a*b;
            length = itostr(pdt, pdt_str);
            if (isPalindrome(pdt_str, length)&& (pdt > largest)) {
                largest = pdt;
            }
        }
    }
    printf("largest: %d", largest);

    return 0;
}

int itostr(int n, int str[]) {
    int i = 0;
    while (n > 0) {
        str[i++] = n%10;
        n /= 10;
    }
    return i;
}

int isPalindrome(int str[], int length) {
    if (length == 1)
        return 1;
    else if (length == 2)
        return str[0] == str[1];
    else
        return ((str[0] == str[length-1]) && (isPalindrome(++str, length-2)));
     
}
