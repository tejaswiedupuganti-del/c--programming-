#include <stdio.h>

void fact(long int n);

int main() {
    long int n;
    printf("Enter any number: ");
    scanf("%ld", &n);
    fact(n);
    return 0;
}

void fact(long int n) {
    long int i, f = 1;
    for (i = 1; i <= n; i++) {
        f = f * i;
    }
    printf("Factorial of %ld = %ld", n, f);
}
