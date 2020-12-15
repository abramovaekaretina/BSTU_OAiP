//
//  main.cpp
//  14
//
//  Created by Ekaterina Abramova on 02.12.2020.
//

//1. В одномерном массиве, состоящем из n вещественных элементов, вычислить количество отрицательных элементов массива и сумму модулей элементов, расположенных после минимального по модулю элемента.

//2. Найти в матрице первый столбец, все элементы которого положительны. Знаки элементов предыдущего столбца изменить на противоположные.


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
    int count = 0, min = 0, s = 0;
    int n;
    int* array;
    cout << "\n\nInput size of array: ";
    cin >> n;
    array = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        array[i] = -20 + rand() % 40;
        cout << array[i] << " ";
        if (array[i] < 0) {
            count++;
        }
    }
    cout << endl;

    for (int i = 1; i < n; i++) {
        if (abs(array[i]) < abs(array[min])) {
            min = i;
        }
    }
    for (int i = min; i < n; i++) {
        s += array[i];
    }
    free(array);
    
    cout << "\nNumber negetive elements : " << count << endl;
    cout << "Sum of elements after minimum (array[" << min << "] = "<< array[min] <<") item of the absolute value of a number : " << s << "\n\n";
    
}

void secondTask() {
    const int N = 7;
    int **a;
    int p, r = 0;
    cout << "\n\nMatrix :\n";
    a = new int*[N];
    for (int i = 0; i < N; i++) {
        a[i] = new int[N];
    }
    
//    a[N][N] = {
//        {1, 2, 3},
//        {-1, -2, 3},
//        {1, -2, 3}
//    };
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            a[i][j] = -5 + rand() % 10;
        }
    }
    
    for (int i = 0, j = 2; i < N; i++) {
        *(*(a + i) + j) = 1;
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "a[" << i << "][" << j << "] = " << setw(2) << a[i][j] << ", ";
        }
        cout << endl;
    }
    
    p = 0;
    for (int j = 0; j < N; j++) {
        p = 0;
        for (int i = 0; i < N; i++) {
            if (*(*(a + i) + j) >= 0) {
                p++;
            }
        }
        if (p == N) {
            r = j;
            break;
        }
        
    }
    
    cout << "\nNew matrix : \n";
    for (int i = 0, j = r - 1; i < N; i++) {
        *(*(a + i) + j) *= -1;
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "a[" << i << "][" << j << "] = " << setw(2) << *(*(a + i) + j) << ", ";
        }
        cout << endl;
        
    }
    cout << "In " << r + 1 << " column all number are positive \n";
    for (int i = 0; i < N; i++) {
        delete a[i];
    }
    delete[]a;

}
