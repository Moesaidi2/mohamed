#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter amount: ";
    cin >> amount;

    int hundred = amount / 100;
    amount %= 100;

    int fifty = amount / 50;
    amount %= 50;

    int twenty = amount / 20;
    amount %= 20;

    int ten = amount / 10;
    amount %= 10;

    int five = amount / 5;
    int one = amount % 5;

    cout << "$100 : " << hundred << endl;
    cout << "$50  : " << fifty << endl;
    cout << "$20  : " << twenty << endl;
    cout << "$10  : " << ten << endl;
    cout << "$5   : " << five << endl;
    cout << "$1   : " << one << endl;

    return 0;
}
