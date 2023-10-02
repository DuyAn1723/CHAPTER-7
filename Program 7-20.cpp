#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getTestScores(double[], int);
double getTotal(const double[], int);
double getLowest(const double[], int);

int main() {
    const int SIZE = 4; // Kích thước của mảng testScores
    double testScores[SIZE], // Mảng chứa điểm thi
        total, // Tổng của điểm thi
        lowestScore, // Điểm thấp nhất
        average; // Điểm trung bình

    // Đặt định dạng hiển thị số thập phân
    cout << fixed << showpoint << setprecision(1);

    // Nhập điểm thi từ người dùng
    getTestScores(testScores, SIZE);

    // Tính tổng điểm thi
    total = getTotal(testScores, SIZE);

    // Tìm điểm thấp nhất
    lowestScore = getLowest(testScores, SIZE);

    // Trừ điểm thấp nhất từ tổng
    total -= lowestScore;

    // Tính điểm trung bình
    average = total / (SIZE - 1);

    // Hiển thị điểm trung bình
    cout << "Điểm trung bình sau khi loại bỏ điểm thấp nhất là " << average << ".\n";

    return 0;
}

// Nhận điểm thi từ người dùng và lưu vào mảng
void getTestScores(double scores[], int size) {
    for (int index = 0; index < size; index++) {
        cout << "Nhập điểm số thứ " << (index + 1) << ": ";
        cin >> scores[index];
    }
}

// Tính tổng của các điểm thi
double getTotal(const double numbers[], int size) {
    double total = 0;
    for (int count = 0; count < size; count++) {
        total += numbers[count];
    }
    return total;
}

// Tìm điểm thấp nhất trong các điểm thi
double getLowest(const double numbers[], int size) {
    double lowest = numbers[0];
    for (int count = 1; count < size; count++) {
        if (numbers[count] < lowest) {
            lowest = numbers[count];
        }
    }
    return lowest;
}
