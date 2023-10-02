#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string filename;
    cout << "Enter the name of the file: ";
    cin >> filename;

    ifstream inputFile(filename);
    if (!inputFile) {
        cout << "Error opening file. Exiting..." << endl;
        return 1;
    }

    double number;
    double total = 0;
    double lowest;
    double highest;
    int count = 0;

    if (inputFile >> number) {
        lowest = highest = number;
        total += number;
        count++;

        while (inputFile >> number) {
            total += number;
            count++;

            if (number < lowest)
                lowest = number;
            if (number > highest)
                highest = number;
        }

        double average = total / count;

        cout << "Lowest number: " << lowest << endl;
        cout << "Highest number: " << highest << endl;
        cout << "Total of numbers: " << total << endl;
        cout << "Average of numbers: " << average << endl;
    }
    else {
        cout << "The file is empty." << endl;
    }

    inputFile.close();
    return 0;
}
