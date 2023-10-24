#include <stdio.h>

int main() {
    int t, n;
    scanf("%d %d", &t, &n);

    if (t <= 0 || n <= 0 || t > 12) {
        printf("INVALID");
    } else if (t == 2) {
        if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) {
            printf("29");
        } else {
            printf("28");
        }
    } else if (t == 4 || t == 6 || t == 9 || t == 11) {
        printf("30");
    } else {
        printf("31");
    }

    return 0;
}
