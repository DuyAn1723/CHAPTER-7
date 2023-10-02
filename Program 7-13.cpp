#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int NUM_EMPLOYEES = 5;
    int hours[NUM_EMPLOYEES];
    double payrate, grossPay;

    cout << "Enter the hours worked by " << NUM_EMPLOYEES << " employees who all earn the same hourly rate.\n";

    for (int index = 0; index < NUM_EMPLOYEES; index++) {
        cout << "Employee #" << (index + 1) << ": ";
        cin >> hours[index];
    }

    cout << "Enter the hourly pay rate for all the employees: ";
    cin >> payrate;

    cout << "Here is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);

    for (int index = 0; index < NUM_EMPLOYEES; index++) {
        grossPay = hours[index] * payrate;
        cout << "Employee #" << (index + 1) << ": $" << grossPay << endl;
    }

    return 0;
}
