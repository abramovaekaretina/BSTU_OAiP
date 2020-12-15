//
//  main.cpp
//  14add3
//
//  Created by Ekaterina Abramova on 12.12.2020.
//

//1. В одномерном массиве, состоящем из n вещественных элементов, вычислить номер минимального элемента массива и сумму элементов массива, расположенных между первым и вторым отрицательными элементами.
//2. Дана целочисленная прямоугольная матрица. Определить количество столбцов, не содержащих ни одного нулевого элемента.

#include <iostream>
#include <iomanip>

using namespace std;

void firstTask();
void secondTask();

int main(int argc, const char * argv[]) {
    
    int number;
    do {
    cout << "Enter number of task - ";
    cin >> number;
        switch (number) {
            case 1:
                cout << "\n    FIRST TASK";
                firstTask();
                break;
            case 2:
                cout << "\n    SECOND TASK";
                secondTask();
                break;
        }
    } while (number < 3);
        
    return 0;
}

void firstTask() {
    int* a, size, firstIndex = 99, secondIndex = 99, sum = 0;
    cout << "\n\nInput size of array: ";
    cin >> size;
    a = (int*)malloc(size * sizeof(int));
//    srand((unsigned)time(0));
    cout << "Array: ";
    int firstMinItem = 99, secondMinItem = 99;
    for (int i = 0; i < size; i++) {
        a[i] = rand() % 20;
        cout << a[i] << " ";
        if (a[i] < firstMinItem) {
            firstMinItem = a[i];
            firstIndex = i;
        }
    }
    
    for (int i = 0; i < size; i++) {
        if ((a[i] < secondMinItem) && (a[i] > firstMinItem)) {
            secondMinItem = a[i];
            secondIndex = i;
        }
    }
    if (firstIndex > secondIndex) {
        for (int i = secondIndex + 1; i < firstMinItem; i++) {
            sum += a[i];
        }
    } else {
        for (int i = firstIndex + 1; i < secondIndex; i++) {
            sum += a[i];
        }
    }
    cout << "\n\nFirst min item - " << firstMinItem << "[" << firstIndex << "]" << "\nSecond min item - " << secondMinItem << "[" << secondIndex << "]\nSum - " << sum << endl;
    free(a);
    cout << endl;
    
}

void secondTask() {
    int **A, n = 5, m = 5, count = 0;
    A = new int* [n];
    for (int i = 0; i < n; i++) {
        A[i] = new int[m];
    }
    cout << "\nMatrix :\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            A[i][j] = rand() % 10 - 5;
            cout << "\t" << A[i][j];
        }
        cout << endl;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] == 0) {
                count++;
                break;
            }
        }
    }
    cout << "Amount of columns that don't contains zero - " << m - count << "\n\n";
    delete[]A;
    
}

