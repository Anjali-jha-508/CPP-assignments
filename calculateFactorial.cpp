#include <iostream>
using namespace std;

int main() {
	cout << "---CALCULATE FACTORIAL---"<< endl;
	int n;
    cout << "Enter a natural number: ";
    cin >> n;
    long long int factorial = 1;
    
    
	for(long long int i = 1; i<=n; i++) {
    factorial = factorial * i;
    }
  
   cout << endl<< "Factorial of " << n <<" is " << factorial;
    return 0;
}

//on executing got to know that this code shows accurate result only for some numbers because as numbers increase the factorial value also increases.
