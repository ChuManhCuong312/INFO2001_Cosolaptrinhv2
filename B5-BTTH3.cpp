#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    int sumEven = 0;
    int sumOdd = 0;

    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 0) {
            sumEven += digit;
        } else {
            sumOdd += digit;
        }
        n /= 10;
    }

    printf("%d\n%d", sumEven, sumOdd);

    return 0;
}

