//
//  main.cpp
//  11add1
//
//  Created by Ekaterina Abramova on 12.11.2020.
//


//Даны две последовательности x[1] . . x[n] и y[1] . . y[k] целых чисел. Найти максимальную длину по-следовательности, являющейся подпоследовательностью обеих последовательностей, т.е. найти максимальную последовательность, которая содержит члены каждой последовательности

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    const int n = 10, k = 10;
    int m = 0;
    int x[n], y[k], z[max(n, k)];
    cout << "Array X: ";
    for (int i = 0; i < k; i++) {
        x[i] = rand() % 30;
        cout << *(x + i) << ' ';
    }
    cout << endl;
    cout << "Array Y: ";
    for (int i = 0; i < k; i++) {
        y[i] = rand() % 30;
        cout << *(y + i) << ' ';
        for (int j = 0; j < n; j++) {
            if (*(x + j) == *(y + i)) {
                *(z + m) = *(y + i);
                m++;
                break;
            }
        }
    }
    cout << "\n\nAnswer: ";
    for (int i = 0; i < m; i++) {
        cout << *(z + i) << ' ';
    }
    cout << endl << endl;
    
    return 0;
}
