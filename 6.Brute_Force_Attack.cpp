#include <iostream>
using namespace std;

int main() {
    const int password = 224455;
    int attempt;
    int tries = 0;

    while (tries < 3) {
        cout << "Enter the password: ";
        cin >> attempt;
        tries++;

        if (attempt == password) {
            cout << "Access Granted!" << endl;
            return 0; // exit program once correct
        } else {
            int remaining = 3 - tries;
            if (remaining > 0) {
                cout << "Wrong! " << remaining << " attempt(s) left." << endl;
            }
        }
    }

    cout << "Too many failed attempts. Your account will be frozen!" << endl;
    return 0;
}
