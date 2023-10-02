#include <iostream>
using namespace std;

const int NUM_MONKEYS = 3;
const int NUM_DAYS = 5;

void inputFoodData(int foodData[NUM_MONKEYS][NUM_DAYS]) {
    for (int i = 0; i < NUM_MONKEYS; ++i) {
        cout << "Enter food data for Monkey " << (i + 1) << " for 5 days:" << endl;
        for (int j = 0; j < NUM_DAYS; ++j) {
            do {
                cout << "Day " << (j + 1) << ": ";
                cin >> foodData[i][j];
                if (foodData[i][j] < 0) {
                    cout << "Invalid input. Enter a non-negative value for food consumption." << endl;
                }
            } while (foodData[i][j] < 0);
        }
    }
}

double calculateAverage(const int foodData[NUM_MONKEYS][NUM_DAYS]) {
    int totalFood = 0;
    for (int i = 0; i < NUM_MONKEYS; ++i) {
        for (int j = 0; j < NUM_DAYS; ++j) {
            totalFood += foodData[i][j];
        }
    }
    return static_cast<double>(totalFood) / (NUM_MONKEYS * NUM_DAYS);
}

int findMin(const int foodData[NUM_MONKEYS][NUM_DAYS]) {
    int minFood = foodData[0][0];
    for (int i = 0; i < NUM_MONKEYS; ++i) {
        for (int j = 0; j < NUM_DAYS; ++j) {
            if (foodData[i][j] < minFood) {
                minFood = foodData[i][j];
            }
        }
    }
    return minFood;
}

int findMax(const int foodData[NUM_MONKEYS][NUM_DAYS]) {
    int maxFood = foodData[0][0];
    for (int i = 0; i < NUM_MONKEYS; ++i) {
        for (int j = 0; j < NUM_DAYS; ++j) {
            if (foodData[i][j] > maxFood) {
                maxFood = foodData[i][j];
            }
        }
    }
    return maxFood;
}

int main() {
    int foodConsumption[NUM_MONKEYS][NUM_DAYS];

    inputFoodData(foodConsumption);

    double avgFood = calculateAverage(foodConsumption);
    int minFood = findMin(foodConsumption);
    int maxFood = findMax(foodConsumption);

    cout << "Average food consumption per day: " << avgFood << " pounds." << endl;
    cout << "Least amount of food eaten during the week: " << minFood << " pounds." << endl;
    cout << "Greatest amount of food eaten during the week: " << maxFood << " pounds." << endl;

    return 0;
}