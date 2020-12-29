//
//  main.cpp
//  16add2
//
//  Created by Ekaterina Abramova on 19.12.2020.
//

#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

void findZero();
int sumOfNumbers(int n, int first, ...);

int main() {
    int choice = 0;
    do {
        cout << "Select task number" << endl;
        cout << "1 - Finding zeros in strings" << endl;
        cout << "2 - Sum of numbers by formula" << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "FIRST TASK : \n";
                findZero();
                break;
            case 2:
                cout << "\nSECOND TASK : \n\n";
                cout << sumOfNumbers(8, 1, 2, 5, 5, 3, 7, 4, 5) << endl << endl;
                break;
            case 3: break;
        }
    } while (choice != 3);
    return 0;
}

void findZero() {
    int rows = 5, columns = 5;
    int* matrix = new int[rows * columns];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            *(matrix + i * columns + j) = rand() % 10 - 5;
            cout << setw(3) << *(matrix + i * columns + j) << " ";
        }
        cout << endl;
    }
    cout << endl;
    int flag = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (*(matrix + i * columns + j) == 0) {
                flag++;
                break;
            }
        }
    }
    if (flag) {
        cout << "Amount of row with zero - " << flag;
    }
    cout << endl;
    delete[] matrix;
}

int sumOfNumbers(int n, int first, ...) { //S=a1*a2-a2*a3+a3*a4-. . . . .
    int* number = &first;
    int result = 0;
    while (n != 1) {
        int temp = *number;
        int temp_2 = *(++number);
        // pow(-1, n) * (*number) * (*(++number))
        result += pow(-1, n) * temp * temp_2;
        n--;
    }
    return result;
}
