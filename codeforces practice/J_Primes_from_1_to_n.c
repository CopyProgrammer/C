#include<stdio.h>
#include<stdbool.h>
#include<math.h>

// Function to check if a number is prime
bool is_prime(int num) {
    if (num <= 1) return 0;
    if (num == 2) return 1; // 2 is the only even prime number
    if (num % 2 == 0) return 0; // eliminate even numbers greater than 2
    
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int N;
    scanf("%d", &N);
    
    for (int i = 2; i <= N; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    
    return 0;
}
