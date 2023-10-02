#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> values(100); // Tạo một vector với 100 phần tử.

    cout << "The values vector has " << values.size() << " elements.\n";
    cout << "I will call the clear member function...\n";
    values.clear(); // Xóa tất cả các phần tử trong vector.
    cout << "Now, the values vector has " << values.size() << " elements.\n";

    return 0;
}
