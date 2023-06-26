#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int s, t;
    int cnt = 0;

    do {
        printf("Enter two integers s and t with s < t: ");
        scanf("%d %d", &s, &t);

        if(s >= t) {
            printf("Invalid input. Ensure s < t. Please try again.\n");
        }
    } while (s >= t);

    for (int x = s; x < t; x++) {
        for (int y = x + 1; y <= t; y++) {
            if (gcd(x, y) == 1) {
                printf("(%d, %d)\n", x, y);
                cnt++;
            }
        }
    }

    printf("Total number of pairs: %d\n", cnt);

    return 0;
}