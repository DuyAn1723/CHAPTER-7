#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const int ARRAY_SIZE = 10;
    int numbers[ARRAY_SIZE];
    int count = 0;
    ifstream inputFile;

    // Open the file
    inputFile.open("TenNumbers.txt");

    // Check if the file opened successfully
    if (!inputFile) {
        cout << "Error opening the file." << endl;
        return 1; // Return an error code
    }

    // Read the numbers from the file into the array
    while (count < ARRAY_SIZE && inputFile >> numbers[count]) {
        count++;
    }

    // Close the file
    inputFile.close();

    // Display the numbers read
    cout << "The numbers are: ";
    for (int i = 0; i < count; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
