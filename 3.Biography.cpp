#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    string hometown;
    int age;

    cout << "Enter your full name: ";
    getline(cin, name);   // allows spaces in first+last name

    cout << "Enter your hometown: ";
    getline(cin, hometown);

    cout << "Enter your age: ";
    cin >> age;

    cout << name << "\n" << hometown << "\n" << age << endl;
    return 0;
}
