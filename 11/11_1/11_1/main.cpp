//
//  main.cpp
//  11_1
//
//  Created by Ekaterina Abramova on 12.11.2020.
//


//Даны массивы A и B, состоящие из n элементов. Построить массив S, каждый элемент которого равен сумме соответствующих элементов массивов A и B

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    const int n = 7;
    int A[n], B[n], S[n];
    srand((unsigned)time(NULL));
    
    cout << "Array A : ";
    for (int i = 0; i < n; i++) {
        *(A + i) = rand() % 30;
        cout << *(A + i) << ' ';
    }
    cout << endl;
    
    cout << "Array B : ";
    for (int i = 0; i < n; i++) {
        *(B + i) = rand() % 30;
        cout << *(B + i) << ' ';
    }
    cout << endl;
    
    cout << "\nArray S : ";
    for (int i = 0; i < n; i++) {
        *(S + i) = *(A + i) + *(B + i);
        cout << *(S + i) << ' ';
    }
    cout << endl;

    return 0;
}
