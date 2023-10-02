#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    vector<int> hours;    // Vector chứa số giờ làm việc của nhân viên
    vector<double> payRate;    // Vector chứa tỷ lệ giờ làm việc của nhân viên
    int numEmployees;    // Số lượng nhân viên
    int index;    // Biến đếm vòng lặp

    // Nhập số lượng nhân viên.
    cout << "Bạn có bao nhiêu nhân viên? ";
    cin >> numEmployees;

    // Nhập thông tin về lương thực hiện.
    cout << "Nhập số giờ làm việc và tỷ lệ giờ làm việc cho " << numEmployees << " nhân viên.\n";
    for (index = 0; index < numEmployees; index++) {
        int tempHours;    // Biến tạm để lưu số giờ làm việc
        double tempRate;    // Biến tạm để lưu tỷ lệ giờ làm việc

        cout << "Số giờ làm việc của nhân viên #" << (index + 1) << ": ";
        cin >> tempHours;
        hours.push_back(tempHours);    // Thêm một phần tử vào vector hours

        cout << "Tỷ lệ giờ làm việc của nhân viên #" << (index + 1) << ": ";
        cin >> tempRate;
        payRate.push_back(tempRate);    // Thêm một phần tử vào vector payRate
    }

    // Hiển thị tổng thu nhập của mỗi nhân viên.
    cout << "Dưới đây là tổng thu nhập của mỗi nhân viên:\n";
    cout << fixed << showpoint << setprecision(2);
    for (index = 0; index < numEmployees; index++) {
        double grossPay = hours[index] * payRate[index];
        cout << "Nhân viên #" << (index + 1);
        cout << ": $" << grossPay << endl;
    }

    return 0;
}
