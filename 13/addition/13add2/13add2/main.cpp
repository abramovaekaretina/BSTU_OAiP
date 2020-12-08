//
//  main.cpp
//  13add2
//
//  Created by Ekaterina Abramova on 01.12.2020.
//

//Дана действительная матрица A(N, N) . Найти сумму  и  мах  значение  среди элементов, расположенных в заштрихованной части матрицы

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
    const int N = 5;
    int A[N][N];
    
    srand((unsigned)time(NULL));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = rand() % 20 + 1 ;
            cout << setw(3) << *(A[i] + j) << " ";
        }
        cout << endl;
    }
    cout << endl;

    int max = A[0][0], sum = 0, stopPosition;
    
    if (N % 2 == 0) {
        stopPosition = N / 2;
    } else {
        stopPosition = N / 2 + 1;
    }
    for (int i = 0; i < stopPosition; i++) {
        for (int j = i; j < stopPosition - i; j++) {
            sum += *(A[i] + j);
            sum += *(A[N - i - 1] + j);
            if (*(A[i] + j) > max) {
                max = *(A[i] + j);
            }
            if (*(A[N - i - 1] + j) > max) {
                max = *(A[N - i - 1] + j);
            }
        }
    }

    cout << "Max - " << max << endl;
    cout << "Sum - " << sum - A[stopPosition][stopPosition] << "\n\n";
    
    return 0;
}
