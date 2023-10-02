#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int NUM_EMPLOYEES = 5; // S? l??ng nhân viên
    int hours[NUM_EMPLOYEES]; // L?u gi? làm vi?c
    double payRate[NUM_EMPLOYEES]; // L?u m?c l??ng theo gi?

    // Nh?p gi? làm vi?c và m?c l??ng theo gi?
    cout << "Enter the hours worked by " << NUM_EMPLOYEES
        << " employees and their hourly pay rates.\n";
    for (int index = 0; index < NUM_EMPLOYEES; index++) {
        cout << "Hours worked by employee #" << (index + 1) << ": ";
        cin >> hours[index];
        cout << "Hourly pay rate for employee #" << (index + 1) << ": ";
        cin >> payRate[index];
    }

    // Hi?n th? t?ng thu nh?p c?a m?i nhân viên
    cout << "Here is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);
    for (int index = 0; index < NUM_EMPLOYEES; index++) {
        double grossPay = hours[index] * payRate[index];
        cout << "Employee #" << (index + 1);
        cout << ": $" << grossPay << endl;
    }

    return 0;
}
