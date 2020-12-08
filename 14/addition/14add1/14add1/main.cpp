//
//  main.cpp
//  14
//
//  Created by Ekaterina Abramova on 02.12.2020.
//

//1. Задан массив A из n элементов. Проверить, есть ли в нём отрицательные элементы. Если есть, найти наибольшее k, при котором A[k] < 0.

//2. Дана вещественная матрица размером 5x4. Переставляя ее строки и столбцы, добиться того, чтобы наибольший элемент (один из них) оказался в верхнем левом углу.

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
    int* A, size, min = 0; bool flag = false;
    cout << "\n\nInput size of array: ";
    cin >> size;
    A = (int*)malloc(size * sizeof(int));
    srand((unsigned) time(0));
    for (int i = 0; i < size; i++) {
        A[i] = rand() % 20 - 15;
        if (A[i] < 0) {
            flag = true;
            min = i;
        }
    }
    if (flag == true) {
        cout << "Array: ";
        for (int i = 0; i < size; i++){
            cout << A[i] << " ";
            if (A[i] < 0 && A[i] > A[min]) {
                min = i;
            } else {
                cout << "Negative numbers not found.";
            }
        }
        cout << "\nThe biggest negative number in array[" << min << "] = " << A[min] << "\n";
    }
    free(A);
    cout << endl;
    
}

void secondTask() {
    int **A, max, row = 0, column = 0;
    const int n = 5, m = 4;
    A = new int *[n];
    for (int i = 0; i < n; i++) {
        A[i] = new int[m];
    }
    cout << "\n\nMatrix :\n ";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            A[i][j] = 1 + rand() % 30;
            cout << A[i][j] << "\t";
        }
        cout << "\n";
    }
    max = A[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (max < A[i][j]){
                max = A[i][j];
                row = i;
                column = j;
            }
        }
    }
    cout << "\nMax A[" << row << "][" << column << "] = " << A[row][column];
    
    int *B;
    B = new int[n];
    for (int i = 0; i < n; i++) {
        B[i] = A[i][column];
        A[i][column] = A[i][0];
        A[i][0] = B[i];
    }
    int *C;
    C = new int[m];
    for (int i = 0; i < m; i++) {
        C[i] = A[row][i];
        A[row][i] = A[0][i];
        A[0][i] = C[i];
    }
    
    cout << "\n\nNew matrix :\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    
    for (int i = 0; i < n; i++) {
        delete A[i];
    }
    delete []A;
    delete []B;
    delete []C;
    
    

}
