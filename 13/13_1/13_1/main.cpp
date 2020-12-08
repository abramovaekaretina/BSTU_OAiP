//
//  main.cpp
//  13_1
//
//  Created by Ekaterina Abramova on 30.11.2020.
//

//Для заданной целочисленной матрицы A(N, M) определить, является ли сумма её элементов чётным числом

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    const int m = 7, n = 7;
    int B[m][n], s = 0;
    cout << "Array :\n";
    for (int i = 0; i < n; i++) {
        cout << "\n";
        for (int j = 0; j < m; j++) {
            B[i][j] = rand() % 100 + 1;
            s += B[i][j];
            cout << "B[" << i << "][" << j <<"]=" << B[i][j] << "  ";
        }
    }
    
    if (s % 2 == 0) {
        cout << "\n\nSum = " << s << ". It is even\n\n";
    } else {
        cout << "\n\nSum = " << s << ". It is odd\n\n";
    }

    return 0;
}

