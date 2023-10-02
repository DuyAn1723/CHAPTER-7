#include <iostream>
#include <iomanip>
#include <vector> // Cần để định nghĩa vectors
using namespace std;

int main() {
    const int NUM_EMPLOYEES = 5; // Số lượng nhân viên
    vector<int> hours(NUM_EMPLOYEES); // Vector chứa số giờ làm việc (kiểu int)
    vector<double> payRate(NUM_EMPLOYEES); // Vector chứa mức lương (kiểu double)
    int index; // Biến đếm vòng lặp

    // Nhập dữ liệu
    cout << "Nhập số giờ làm việc và mức lương theo giờ cho " << NUM_EMPLOYEES;
    cout << " nhân viên.\n";
    for (index = 0; index < NUM_EMPLOYEES; index++) {
        cout << "Số giờ làm việc của nhân viên thứ #" << (index + 1) << ": ";
        cin >> hours[index];
        cout << "Mức lương theo giờ của nhân viên thứ #" << (index + 1) << ": ";
        cin >> payRate[index];
    }

    // Hiển thị tổng thu nhập của mỗi nhân viên
    cout << "\nDưới đây là tổng thu nhập của mỗi nhân viên:\n";
    cout << fixed << showpoint << setprecision(2);
    for (index = 0; index < NUM_EMPLOYEES; index++) {
        double grossPay = hours[index] * payRate[index];
        cout << "Nhân viên thứ #" << (index + 1);
        cout << ": $" << grossPay << endl;
    }

    return 0;
}
