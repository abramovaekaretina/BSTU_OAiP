//
//  main.cpp
//  10add2
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

//1.    Извлечь 4 бита числа A, начиная с пятого, и добавить их к числу B справа.
//
//2.    Установить в 1 в числе А n битов влево от позиции p, заменить ими m битов числа В, начиная с позиции q


int main(int argc, const char * argv[]) {

//    int a, b;
//    cout << "Enter number A : ";
//    cin >> a;
//    cout << "Enter number B : ";
//    cin >> b;
//    int maskA = (int(pow(2, 4) - 1) << 1), maskB = ~(int(pow(2, 4) - 1));
////    _itoa_s(a, tmp, 2);
//    cout << "\nA = " << getBin(a);
////    _itoa_s(maskA, tmp, 2);
//    cout << ", maskA = " << getBin(maskA) << endl;
////    _itoa_s(b, tmp, 2);
//    cout << "B = " << getBin(b);
////    _itoa_s(maskB, tmp, 2);
//    cout << ", maskB = " << getBin(maskB) << endl;
////    _itoa_s(((maskA & a) >> 1), tmp, 2);
//    cout << "Selected bits : " << getBin((maskA & a) >> 1) << endl;
////    _itoa_s(b & maskB, tmp, 2);
//    cout << "Number B after clean : " << getBin(b & maskB) << endl;
////    _itoa_s(((maskA & a) >> 1) | (b & maskB), tmp, 2);
//    cout << "Result : " << getBin(((maskA & a) >> 1) | (b & maskB)) << endl;
    
    int a, b, p, q, n;
    cout << "Enter number A : ";
    cin >> a;
    cout << "Enter number of posision p : ";
    cin >> p;
    cout << "Enter number B : ";
    cin >> b;
    cout << "Enter number of position q : ";
    cin >> q;
    cout << "Enter number n : ";
    cin >> n;
    int mask = (int(pow(2, n) - 1)), maskA = mask << p, maskB = mask << q;
    cout << endl << mask << endl << maskA << endl << maskB;
//    _itoa_s(a, tmp, 2);
    cout << "\nA = " << getBin(a) << endl;
//    _itoa_s(a | maskA, tmp, 2);
    cout << "New A = " << getBin(a | maskA) << endl;
//    _itoa_s(b, tmp, 2);
    cout << "B = " << getBin(b) << endl;
//    _itoa_s(b | maskB, tmp, 2);
    cout << "New B = " << getBin(b | maskB) << endl;
    cout << endl;

    return 0;
}
