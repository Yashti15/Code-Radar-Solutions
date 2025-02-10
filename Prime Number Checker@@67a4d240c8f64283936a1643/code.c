#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) 
        return 0;  // Numbers less than 2 are not prime
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;  // Not a prime number
    }
    
    return 1;  // Prime number
}

int main() {
    int t, num;
    
    // Taking number of test cases
    scanf("%d", &t);
    
    while (t--) {
        // Taking number input
        scanf("%d", &num);
        
        // Printing result: 1 for prime, 0 for not prime
        printf("%d\n", isPrime(num));
    }

    return 0;
}
