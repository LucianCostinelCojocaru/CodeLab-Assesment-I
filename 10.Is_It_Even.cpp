#include <iostream>
#include <string>
using namespace std;

// Function to check if a number is even or odd
string checkEven(int number) {
    if (number % 2 == 0) {
        return "The provided number is even";
    } else {
        return "The provided number is odd";
    }
}

int main() {
    int value;

    // Ask the user for a number
    cout << "Enter a number: ";
    cin >> value;

    // Pass the number to the function and get the result
    string result = checkEven(value);

    // Output the returned message
    cout << result << endl;

    return 0;
}
