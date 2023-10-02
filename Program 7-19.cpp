#include <iostream>
using namespace std;

// Function prototypes
void doubleArray(int[], int);
void showValues(int[], int);

int main() {
    const int ARRAY_SIZE = 7;
    int set[ARRAY_SIZE] = { 1, 2, 3, 4, 5, 6, 7 };

    // Hiển thị giá trị ban đầu
    cout << "Các giá trị trong mảng là:\n";
    showValues(set, ARRAY_SIZE);

    // Nhân đôi giá trị trong mảng
    doubleArray(set, ARRAY_SIZE);

    // Hiển thị giá trị sau khi gọi hàm doubleArray
    cout << "Sau khi gọi hàm doubleArray, các giá trị là:\n";
    showValues(set, ARRAY_SIZE);

    return 0;
}

// Hàm nhân đôi giá trị của mảng
void doubleArray(int nums[], int size) {
    for (int index = 0; index < size; index++) {
        nums[index] *= 2;
    }
}

// Hàm hiển thị giá trị của mảng
void showValues(int nums[], int size) {
    for (int index = 0; index < size; index++) {
        cout << nums[index] << " ";
    }
    cout << endl;
}
