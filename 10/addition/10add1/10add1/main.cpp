//
//  main.cpp
//  10add1
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

//1.    Используя битовые операции проверить, кратно ли четырем число А.
//2.    Установить в 1 в числе А n битов влево от позиции p.


int main(int argc, const char * argv[]) {
    
    int A;
    cout << "Enter number : ";
    cin >> A;
//    _itoa_s(A, tmp, 2);
    cout << "\nA = " << getBin(A) << endl;
    if (getBin(A) % 100 == 0) {
        cout << "Multiple of 4" << endl;
    } else {
        cout << "Don't multiple of 4" << endl;
    }
    
    
    int a, p, n;
    cout << "\n\nEnter number A : ";
    cin >> a;
    cout << "Enter number of posision p : ";
    cin >> p;
    cout << "Enter number n : ";
    cin >> n;
    int mask = (int(pow(2, n) - 1)), maskA = (mask << p);
//    _itoa_s(a, tmp, 2);
    cout << "\nA = " << getBin(a) << endl;
//    _itoa_s(a | maskA, tmp, 2);
    cout << "New A = " << getBin(a | maskA) << endl;
    
    return 0;
}
