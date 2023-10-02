#include <iostream>
using namespace std;

int main() {
    const int months = 12;
    double rainfall[months], total = 0, high = 0, low = 9999;

    for (int i = 0; i < months; ++i) {
        cout << "Rainfall for month " << (i + 1) << ": ";
        cin >> rainfall[i];

        while (rainfall[i] < 0) {
            cout << "Enter valid rainfall for month " << (i + 1) << ": ";
            cin >> rainfall[i];
        }

        total += rainfall[i];
        if (rainfall[i] > high) high = rainfall[i];
        if (rainfall[i] < low) low = rainfall[i];
    }

    cout << "Total rainfall: " << total << endl;
    cout << "Average monthly rainfall: " << (total / months) << endl;
    cout << "Highest rainfall: " << high << endl;
    cout << "Lowest rainfall: " << low << endl;

    return 0;
}