#include<iostream>
using namespace std;

int main() {
    int amount, notes_100, notes_20, notes_10;

    cout << "Enter the amount: ";
    cin >> amount;

    switch (amount / 100) {
        case 0:
            notes_100 = 0;
            break;
        default:
            notes_100 = amount / 100;
            amount = amount - (notes_100 * 100);
            break;
    }

    switch (amount / 20) {
        case 0:
            notes_20 = 0;
            break;
        default:
            notes_20 = amount / 20;
            amount = amount - (notes_20 * 20);
            break;
    }

    switch (amount / 10) {
        case 0:
            notes_10 = 0;
            break;
        default:
            notes_10 = amount / 10;
            break;
    }

    cout << "100 Notes: " << notes_100 << endl;
    cout << "20 Notes: " << notes_20 << endl;
    cout << "10 Notes: " << notes_10 << endl;

    return 0;
}
