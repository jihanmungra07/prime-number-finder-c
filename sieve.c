#include <stdio.h>
#include <stdbool.h>

int main() {
    int n = 0;

    printf("Enter a number till which you want to find primes: ");
    scanf("%d", &n);

    while (n < 2) {
        printf("The Sieve of Eratosthenes does not work for numbers less than 2.\n");
        printf("Please enter a new number:\n");
        scanf("%d", &n);     
    }

    int isPrime[n + 1];
    for (int i = 0; i <= n; i++) {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for (int m = 2; m * m <= n; m++) {
        if (isPrime[m]) {
            for (int multiple = m * m; multiple <= n; multiple += m) {
                isPrime[multiple] = false;
            }
        }
    }

 printf("Prime numbers up to %d: ", n);
 bool comma = true;

 for (int i = 2; i <= n; i++) {
    if (isPrime[i]) {
        if(!comma) {
            printf(", ");
        }
        printf("%d",i);
        comma = false;
    }
 }
 return 0;
}
