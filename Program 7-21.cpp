#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int NUM_DIVS = 3; // Số phân phối
    const int NUM_QTRS = 4; // Số quý
    double sales[NUM_DIVS][NUM_QTRS]; // Mảng có 3 hàng và 4 cột.
    double totalSales = 0; // Để lưu tổng doanh số
    int div, qtr; // Biến đếm vòng lặp.

    cout << "Chương trình này sẽ tính tổng doanh số của\n";
    cout << "tất cả các phân phối của công ty.\n";
    cout << "Nhập thông tin doanh số như sau:\n\n";

    // Vòng lặp lồng nhau để điền mảng với số liệu doanh số theo quý cho từng phân phối.
    for (div = 0; div < NUM_DIVS; div++) {
        for (qtr = 0; qtr < NUM_QTRS; qtr++) {
            cout << "Phân phối " << (div + 1);
            cout << ", Quý " << (qtr + 1) << ": $";
            cin >> sales[div][qtr];
        }
        cout << endl; // In dòng trống.
    }

    // Vòng lặp lồng nhau để tính tổng các phần tử.
    for (div = 0; div < NUM_DIVS; div++) {
        for (qtr = 0; qtr < NUM_QTRS; qtr++) {
            totalSales += sales[div][qtr];
        }
    }

    cout << fixed << showpoint << setprecision(2);
    cout << "Tổng doanh số của công ty là: $";
    cout << totalSales << endl;

    return 0;
}
