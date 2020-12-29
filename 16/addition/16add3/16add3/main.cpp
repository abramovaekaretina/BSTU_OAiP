//
//  main.cpp
//  16add3
//
//  Created by Ekaterina Abramova on 19.12.2020.
//

#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

void matrix();
double minimumOfTheRow(double n, double first, ...);
int minimumOfTheRow(int n, int first, ...);

int main() {
    int choice = 0;
    do {
        cout << "1 - Find string with negative elements" << endl;
        cout << "2 - Finding the minimum of numbers" << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "FIRST TASK : \n";
                matrix();
                break;
            case 2:
                cout << "\nSECOND TASK : \n\n";
                cout << minimumOfTheRow(5, 14, 1, 4, 2, 0) << endl << endl;
                break;
            case 3: break;
        }
    } while (choice != 3);
    return 0;
}

void matrix() {
    int rows = 5, columns = 5;
    double* matrix = new double[rows * columns];
    srand((unsigned)time(NULL));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            *(matrix + i * columns + j) = rand() % 10 - 5;
        }
    }
    for (int i = 0, j = 3; i < rows; i++) {
        *(matrix + i * columns + j) = -3;
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << setw(3) << *(matrix + i * columns + j) << " ";
        }
        cout << endl;
    }
    cout << endl;
    int temp = 0;
    for (int i = 0; i < rows; i++) {
        int counter = 0;
        for (int j = 0; j < columns; j++) {
            if (*(matrix + j * columns + i) < 0) {
                counter++;
            } else {
                counter = 0;
            }
        }
        if (counter == rows) {
            temp = i;
            cout << "Column of negative elements - " << temp << endl;
            i = rows;
        }
    }
    double average = 0;
    for (int i = 0; i < rows; i++) {
        average += *(matrix + temp * columns + i);
    }
    average /= rows;
    cout << "Average - " << average << endl;
    
    for (int i = 0, j = temp; i < rows; i++) {
            *(matrix + i * columns + j) /= 2;
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << setw(4) << *(matrix + i * columns + j) << " ";
        }
        cout << endl;
    }
    cout << endl;
    delete[] matrix;
}

double minimumOfTheRow(double n, double first, ...) {
    double* d = &first;
    double* min = &first;
    while (n--) {
        if (*(++d) < *min)
            *min = *d;
    }
    return *min;
}

int minimumOfTheRow(int n, int first, ...) {
    int* u = &first;
    int* min = &first;
    while (n--) {
        if (*min > *(++u))
            *min = *u;
    }
    return *min;
}
