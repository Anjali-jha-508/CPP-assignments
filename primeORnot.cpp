#include <iostream>
using namespace std;

int main() {
    cout << "---PRIME NUMBER CHECKER---" << endl;
    int n;
    bool isPrime;

    cout << "Enter a positive integer: ";
    cin >> n;

    // Numbers less than or equal to 1 are not prime
    if (n <= 1) {
        isPrime = false;
    } 
    else {
        // a prime number is only divisible by 1 and itself 
        // Check if n is divisible by any number from 2 to n-1
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                isPrime = false; // Found a factor, so it is not prime
            }
        }
    }

    // Output the result
    if(isPrime) {
        cout << n << " is a prime number." << endl;
    } 
    else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}