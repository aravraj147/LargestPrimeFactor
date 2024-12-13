#include <iostream>
#include <cmath>

using namespace std;

// Function to find the largest prime factor of a given number
long long largestPrimeFactor(long long n) {
    long long largestFactor = -1;

    // Divide out the factor of 2
    while (n % 2 == 0) {
        largestFactor = 2;
        n /= 2;
    }

    // Now, check for odd factors from 3 to sqrt(n)
    for (long long i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            largestFactor = i;
            n /= i;
        }
    }

    // If n is still greater than 2, then it must be prime
    if (n > 2) {
        largestFactor = n;
    }

    return largestFactor;
}

int main() {
    long long number = 13195;
    cout << "The largest prime factor of " << number << " is " << largestPrimeFactor(number) << endl;
    return 0;
}
