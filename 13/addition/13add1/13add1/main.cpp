//
//  main.cpp
//  13add1
//
//  Created by Ekaterina Abramova on 30.11.2020.
//

//Дана квадратная матрица порядка 2n, элементы которой формируются случайным образом и находятся в пределах от -10 до 10. Получить новую матрицу, переставляя ее блоки размера n×n в соответствии со схемой

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
    srand((unsigned)time(NULL));
    const int N = 40;
    int n;
    cout << "Enter size of matrix NxN: ";
    cin >> n;
    n *= 2;
    int A[N][N];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = rand() % 41 - 20;
            cout << setw(3) << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    int newSize = n / 2;
    for (int i = 0; i < newSize; i++) {
        for (int j = 0; j < newSize; j++) {
            int temp = 0;
            temp = *(A[i] + j);
            *(A[i] + j) = *(A[i + newSize] + j + newSize);
            *(A[i + newSize] + j + newSize) = temp;

            temp = *(A[i] + newSize + j);
            *(A[i] + newSize + j) = *(A[newSize + i] + j);
            *(A[newSize + i] + j) = temp;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(3) << A[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
