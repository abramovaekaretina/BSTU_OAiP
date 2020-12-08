//
//  main.cpp
//  13add3
//
//  Created by Ekaterina Abramova on 01.12.2020.
//

//Латинским квадратом порядка n называется квадратная таблица размером nхn, каждая строка и каждый столбец которой содержит все числа от 1 до n. Для заданного n в матрице L(n, n) построить латинский квадрат порядка n

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    const int N = 10;
    int A[N][N], size;
    cout << "Enter size NxN: ";
    cin >> size;
    int max = size, min = 2, shift = 1;
    for (int i = 0; i < size; i++) {
        A[i][i] = 1;
    }

    for (int i = 0; i < size - 1; i++) {
        int q = 0;
        while (shift < size) {
            A[q][shift] = min;
            A[shift][q] = max;
            q++;
            shift++;
        }
        shift = i + 2;
        min++;
        max--;
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << *(A[i] + j) << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    return 0;
}
