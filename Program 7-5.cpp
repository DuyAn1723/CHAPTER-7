#include <iostream>
using namespace std;

int main() {
    const int SIZE = 3; // Kích thước cố định cho mảng
    int values[SIZE]; // Mảng gồm 3 số nguyên
    int count; // Biến đếm vòng lặp

    // Cố gắng lưu trữ năm số vào mảng có ba phần tử.
    cout << "I will store 5 numbers in a 3-element array!\n";
    for (count = 0; count < 5; count++)
        values[count] = 100;

    // Nếu chương trình vẫn đang chạy, hiển thị các số.
    cout << "If you see this message, it means the program\n";
    cout << "has not crashed! Here are the numbers:\n";
    for (count = 0; count < 5; count++)
        cout << values[count] << endl;
    return 0;
}
