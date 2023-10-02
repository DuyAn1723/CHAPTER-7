#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> values;

    // Lưu trữ các giá trị trong vector.
    values.push_back(1);
    values.push_back(2);
    values.push_back(3);
    cout << "The size of values is " << values.size() << endl;

    // Loại bỏ một giá trị khỏi vector.
    cout << "Popping a value from the vector...\n";
    values.pop_back();
    cout << "The size of values is now " << values.size() << endl;

    // Loại bỏ một giá trị khác khỏi vector.
    cout << "Popping a value from the vector...\n";
    values.pop_back();
    cout << "The size of values is now " << values.size() << endl;

    // Loại bỏ giá trị cuối cùng khỏi vector.
    cout << "Popping a value from the vector...\n";
    values.pop_back();
    cout << "The size of values is now " << values.size() << endl;

    return 0;
}
