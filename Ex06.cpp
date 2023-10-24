#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    int countEven = 0;
    int countOdd = 0;

    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 0) {
            countEven++;
        } else {
            countOdd++;
        }
        n /= 10;
    }

    if (countEven == countOdd) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
