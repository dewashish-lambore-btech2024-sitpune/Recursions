#include <iostream>
using namespace std;

void reverseNumber(int n) {
    if (n > 0) {
        cout << n % 10;
        reverseNumber(n / 10);
    }
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Reversed Number: ";
    reverseNumber(number);
    cout << endl;

    return 0;
}
