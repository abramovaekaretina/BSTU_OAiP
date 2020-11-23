//
//  main.cpp
//  10_1
//
//  Created by Ekaterina Abramova on 10.11.2020.
//

#include <iostream>
#include <cstdlib>

using namespace std;

int getBin(int value) {
    int bin = 0, k = 1;
    while (value) {
        bin += (value % 2) * k;
        k *= 10;
        value /= 2;
    }

    return bin;
}

//1.    Извлечь 5 битов числа A, начиная со второго и вставить их в число B, начиная с третьего бита.
//2.    Установить в 1 в числе А n битов вправо от позиции p.


int main(int argc, const char * argv[]) {
    
//    int a, b;
//    int maskA = 31 << 2,
//        maskB = ~(31 << 3);
//    cout << "Enter A: ";
//    cin >> a;
//    cout << "Enter B: ";
//    cin >> b;
//    cout << "\nA = " << getBin(a) << endl;
//    cout << "B = " << getBin(b) << endl;
//    a &= maskA;
//    a <<= 1;
//    b &= maskB;
//    b |= a;
//    cout << "Result - " << getBin(b) << endl;
    
    
    int A, position, n;
    cout << "Enter A : ";
    cin >> A;
//    _itoa_s(A, tmp, 2);
    cout << "Enter posision : ";
    cin >> position;
    cout << "Enter number bits : ";
    cin >> n;
    int mask = int(pow(2, n) - 1) << position;
    cout << "\nA = " << getBin(A) << endl;
    cout << "Result - " << getBin(A | mask);
    cout << endl;
    
    return 0;
}
