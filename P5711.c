#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n % 4 || !(n % 400))
        putchar('0');
    else
        putchar('1');
    return 0;
}
