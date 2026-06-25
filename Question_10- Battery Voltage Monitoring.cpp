#include <iostream>
using namespace std;

int main() {
    double voltage;  // Variable to store each battery voltage reading

    // Programme header
    cout << "========================================" << endl;
    cout << "      Battery Voltage Monitor           " << endl;
    cout << "========================================" << endl;
    cout << "Normal range: 12 V or above." << endl;
    cout << "----------------------------------------" << endl;

    // Read-ahead: accept first reading before the while loop
    cout << "Enter battery voltage reading (V): ";
    cin >> voltage;

    // while loop: continues as long as voltage is normal (>= 12 V)
    while (voltage >= 12) {
        cout << "  --> Battery voltage normal: " << voltage << " V" << endl;
        cout << "Enter next battery voltage reading (V): ";
        cin >> voltage;
    }

    // Loop exited — voltage has dropped below 12 V
    cout << "----------------------------------------" << endl;
    cout << "WARNING: Voltage dropped to " << voltage << " V!" << endl;
    cout << "Battery voltage low. Recharge required." << endl;
    cout << "========================================" << endl;

    return 0;
}
