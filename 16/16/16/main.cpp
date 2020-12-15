//
//  main.cpp
//  16
//
//  Created by Ekaterina Abramova on 13.12.2020.
//

#include <iostream>

using namespace std;

int fmin(int n, ...);
int getNumberOfColumn();

int main(int argc, const char * argv[]) {
    cout << "FIRST TASK : \n";
    getNumberOfColumn();
    cout << "\n\nSECOND TASK : \n\n";
    cout << "Firdt call to function : ";
    cout << fmin( 4, 6, 7, 1, 15, 24, 2 ) << endl;
    cout << "Second call to function : ";
    cout << fmin( -1, -2, 0 ) << endl;
    cout << "Third call to function : ";
    cout << fmin( 8, 100, 7, 15, 0, 3 ) << endl << endl;
}

int fmin(int n, ...) {
    int *p = &n;
    int minValue = *p;
    for (int i = 1; i <= n; i++) {
        if (*p < minValue) {
            minValue = *p;
        }
        ++p;
    }
    return minValue;
}

int getNumberOfColumn() {
    int **A, n = 5, m = 5, column = 0;
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
                column += ++j;
            }
        }
    }
    cout << "Column number that contains zero - " << column;
    delete[]A;

    return 0;
}
