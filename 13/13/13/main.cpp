//
//  main.cpp
//  13
//
//  Created by Ekaterina Abramova on 30.11.2020.
//

//Найти наибольший элемент матрицы A(N, M), а также номера строки и столбца, на пересечении которых он находится

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    const int m = 7, n = 7;
    int B[m][n], max, indexMaxI = 0, indexMaxJ = 0;
    cout << "Array :\n";
    for (int i = 0; i < n; i++) {
        cout << "\n";
        for (int j = 0; j < m; j++) {
            B[i][j] = rand() % 100 + 1;
            cout << "B[" << i << "][" << j <<"]=" << B[i][j] << "  ";
        }
    }
    max = B[indexMaxI][indexMaxJ];
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            if (B[i][j] > max) {
                max = B[i][j];
                indexMaxI = i;
                indexMaxJ = j;
            }
        }
    }
    cout << "\nMaximum item of matrix : " << max << endl;
    cout << "Indexes of items " << indexMaxI << "x" << indexMaxJ << "\n\n";

    return 0;
}
