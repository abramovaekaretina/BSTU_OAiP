//
//  main.cpp
//  10add3
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


//1.    Используя битовые операции проверить, кратно ли шестнадцати число А.
//2.    Извлечь 3 бита числа А, начиная с позиции n, и вставить в число В, начиная с позиции m.


int main(int argc, const char * argv[]) {
    
//    int A;
//    cout << "Enter A : ";
//    cin >> A;
////    _itoa_s(A, tmp, 2);
//    cout << "\nA = " << getBin(A) << endl;
//    if (getBin(A) % 10000 == 0) {
//        cout << "Multiple of 16\n";
//    } else {
//        cout << "Don't multiple of 16\n";
//    }
//    cout << endl;
    
    int A, B, n, m;
    int maskA = 14,
//        maskA = int(pow(2, 3) - 1) << n,
        maskB = ~maskA >> 1;
//  int A, B, n, m, maskA = 14;
    cout << "Enter А : ";
    cin >> A;
    cout << "Enter В : ";
    cin >> B;
    cout << "Enter position n : ";
    cin >> n;
    cout << "Enter position m : ";
    cin >> m;
//    _itoa_s(A, tmp, 2);
    cout << "\nA = " << getBin(A) << endl;
//    _itoa_s(maskA, tmp, 2);
    cout << "maskA  = " << getBin(maskA) << endl;
//    _itoa_s(B, tmp, 2);
    cout << "B = " << getBin(B) << endl;
    //    _itoa_s(maskB, tmp, 2);
    cout << "maskВ = " << getBin(maskB) << endl;
//    _itoa_s((A & maskA) >> n, tmp, 2);
    cout << "\nSelected bits А - " << getBin((A & maskA) >> n) << endl;
//    _itoa_s((B & maskB) >> m, tmp, 2);
    cout << "Clean bits in B : " << getBin((B & maskB) >> m) << endl;
//    _itoa_s((((B & maskB)) >> n | ((A & maskA) >> m)), tmp, 2);
    cout << "Result = " << getBin(((B & maskB)) >> n | ((A & maskA) >> m)) << endl;
    cout << endl;
    
    return 0;
}
