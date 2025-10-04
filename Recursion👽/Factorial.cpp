#include <iostream>
#include <limits>  // For numeric_limits
using namespace std;

unsigned long long factorial(int n) {
    if (n == 0) {  // Base case
        return 1;
    }
    return static_cast<unsigned long long>(n) * factorial(n - 1);  // Recursive relation
}

int main() {
    int n;

    cout << "Enter a non-negative integer: ";

    // Input validation
    while (!(cin >> n)) {
        cout << "❌ Invalid input! Please enter an integer: ";
        cin.clear();  // Clear error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Discard invalid input
    }

    if (n < 0) {
        cout << "⚠️ Factorial is not defined for negative numbers." << endl;
        return 0;
    }

    cout << "✅ Factorial of " << n << " = " << factorial(n) << endl;

    return 0;
}
