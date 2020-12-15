//
//  main.cpp
//  14
//
//  Created by Ekaterina Abramova on 02.12.2020.
//

//1. Задан массив A из n элементов. Найти количество элементов этого массива, больших среднего арифметического всех его элементов.

//2. Дана целочисленная прямоугольная матрица. Определить количество строк, не содержащих ни одного нулевого элемента и максимальное из чисел, встречающихся в заданной матрице более одного раза


#include <iostream>
#include <iomanip>

using namespace std;

void firstTask();
void secondTask();

int main(int argc, const char * argv[]) {
    
    int number;
    do {
    cout << "\nEnter number of task - ";
    cin >> number;
        switch (number) {
            case 1:
                cout << "\n    FIRST TASK\n";
                firstTask();
                break;
            case 2:
                cout << "\n    SECOND TASK\n";
                secondTask();
                break;
        }
    } while (number < 3);
        
    return 0;
}

void firstTask() {
    int n, average = 0, count = 0;
    cout << "\nInput size of array: ";
    cin >> n;
    float *a;
    a = (float*)calloc(n, sizeof(float));
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 20 + 1;
        average += a[i];
        cout << a[i] << " ";
    }
    average /= n;
    for (int i = 0; i < n; i++) {
        if (a[i] > average) {
            count++;
        }
    }
    cout << "\nAverage - " << average << "\nElements more average - " << count << endl;
    free(a);

}

void secondTask() {
    const int n = 7, m = 7;
    int **a;
    a = new int *[n];
    for (int i = 0; i < n; i++) {
        a[i] = new int[m];
    }
    cout << "\n\nMatrix :\n ";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            a[i][j] = -14 + rand() % 30;
        }
    }
    a[4][2] = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
    int countRows = 0, max = a[0][0], maxCount = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < m; j++) {
            if (a[i][j]) {
                count++;
            }
            if (a[i][j] == max) {
                maxCount++;
            }
            if (a[i][j] > max) {
                maxCount = 0;
            }
        }
        if (count == m) {
            countRows++;
        }
    }
    cout << "\nAmount of rows - " << countRows;
    cout << "\n\nMaximum - " << (maxCount ? max : -1) << endl;
    for (int i = 0; i < n; i++) {
        delete a[i];
    }
    delete []a;

}
