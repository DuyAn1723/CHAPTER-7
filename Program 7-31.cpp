#include <iostream>
#include <vector>
using namespace std;

// Function prototype
double avgVector(vector<int>);

int main() {
    vector<int> values; // Vector để lưu trữ các giá trị
    int numValues; // Số lượng giá trị
    double average; // Để lưu giá trị trung bình

    // Nhập số lượng giá trị cần tính trung bình
    cout << "How many values do you wish to average? ";
    cin >> numValues;

    // Nhập giá trị và lưu vào vector
    for (int count = 0; count < numValues; count++) {
        int tempValue;
        cout << "Enter a value: ";
        cin >> tempValue;
        values.push_back(tempValue);
    }

    // Tính và hiển thị giá trị trung bình
    average = avgVector(values);
    cout << "Average: " << average << endl;

    return 0;
}

// Định nghĩa hàm avgVector
double avgVector(vector<int> vect) {
    int total = 0; // Biến tích luỹ tổng
    double avg; // Biến giá trị trung bình

    // Kiểm tra xem vector có rỗng hay không
    if (vect.empty()) {
        cout << "No values to average.\n";
        avg = 0.0;
    }
    else {
        for (int count = 0; count < vect.size(); count++) {
            total += vect[count];
        }
        avg = static_cast<double>(total) / vect.size(); // Ép kiểu sang double để tính toán độ chính xác
    }

    return avg;
}
