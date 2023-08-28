#include <stdio.h>

int main() {
    int given_number;  // The number to be checked for prime number is declared here
    int is_prime = 1;   // lets assume the number is prime and can be changed based on the disvision

    printf("Enter a number to be checked for Prime or not: ");
    scanf("%d", &given_number);

    if (given_number <= 1) {
        is_prime = 0;  //  If a number is less than 1 then it is not prime 
    }else {
        for (int i = 2; i <= given_number / 2; ++i) {
            if (given_number % i == 0) {
                is_prime = 0;  // If divisible, set the flag to indicate not prime
                break;
            }
        }
    }

    if (is_prime) {
        printf("The number is prime.\n");
    } else {
        printf("The number is not prime.\n");
    }

    return 0;
}
