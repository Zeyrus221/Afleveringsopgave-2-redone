#include <stdio.h>

void get_input(int *c, int *n);
void check_if_n_contains_c(int c, int n);

int main() {

    int c, n;
    get_input(&c, &n);  // brug & for at sende adressen

    check_if_n_contains_c(c, n);

    return 0;
}

void check_if_n_contains_c(int c, int n) {
    int found = 0;

    while (n > 0) {
        if (n % 10 == c) {
            found = 1;
            break;
        }
        n = n / 10;
    }

    if (found) {
        printf("The number contains %d\n", c);
    } else {
        printf("The number does NOT contain %d\n", c);
    }
}

void get_input(int *c, int *n) {
    // Get c (0–9)
    do {
        printf("Enter an integer between 0 and 9 for c: ");
        scanf("%d", c);

        if (*c < 0 || *c > 9) {
            printf("Error: c must be between 0 and 9. You entered %d\n", *c);
        }
    } while (*c < 0 || *c > 9);

    // Get n (> 0)
    do {
        printf("Enter an integer greater than 0 for n: ");
        scanf("%d", n);

        if (*n <= 0) {
            printf("Error: n must be greater than 0. You entered %d\n", *n);
        }
    } while (*n <= 0);

    printf("Success! c = %d, n = %d\n", *c, *n);
}