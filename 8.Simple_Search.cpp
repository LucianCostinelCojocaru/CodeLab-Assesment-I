#include <iostream>
#include <string>
using namespace std;

int main() {
    // Initialise the array of names
    string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};
    int size = sizeof(names) / sizeof(names[0]); // safer way to get array size

    // Ask the user for a search term
    string search;
    cout << "Enter a name to search: ";
    getline(cin, search); // allows spaces if needed

    // Flag to track if found
    bool found = false;

    // Loop through the array
    for (int i = 0; i < size; i++) {
        if (names[i] == search) {
            cout << search << " was found in the array!" << endl;
            found = true;
            break;
        }
    }

    // If not found
    if (!found) {
        cout << search << " was not found in the array." << endl;
    }

    return 0;
}
