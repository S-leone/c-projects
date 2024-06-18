#include <iostream>
using namespace std;

int main() {
    double exchangeRate;
    double dollarValue;

    cout << "How much is Kenyan shillings to one dollar? ";
    cin >> exchangeRate;

    do {
        cout << "Input Dollar value (input 0 then enter to exit): ";
        cin >> dollarValue;

        if (dollarValue != 0) {
            double kenyanShilling = dollarValue * exchangeRate;
            cout << fixed << dollarValue << " dollar = " << kenyanShilling << " Kenyan Shilling" << endl;
        }
    } while (dollarValue != 0);

    return 0;
}