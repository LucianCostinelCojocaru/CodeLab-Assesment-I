#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string answer;
    cout << "What is the capital of France? ";
    getline(cin, answer);

    // convert to lowercase
    transform(answer.begin(), answer.end(), answer.begin(), ::tolower);

    if (answer == "paris") {
        cout << "Correct!" << endl;
    } else {
        cout << "Wrong!" << endl;
    }

    return 0;
}