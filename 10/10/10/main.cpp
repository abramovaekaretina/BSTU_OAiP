//
//  main.cpp
//  10
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

int main(int argc, const char * argv[]) {
//    int a;
//    cout << "Enter number : ";
//    cin >> a;
//    cout << "\nBinary code - " << getBin(a);;
//    int mask = 8188; //1111111111100
//    int a1 = (a & mask) >> 2;
//    cout << "\nSearching bits a : " << getBin(a1);;
//    //    _itoa_s(a1, tmp, 2);
//    cout << endl;
//    int k = 0;
//    while (a1) {
//        if (a1 % 2 == 0) {
//            k++;
//        }
//        a1 /= 2;
//    }
//    cout << "Starting from 3 bits to 13 in binary notation number of the number " << k << " zeros";
    
    
    int a, b, p, n, q;
    cout << "Enter number A : ";
    cin >> a;
    cout << "Enter number B : ";
    cin >> b;

    cout << "Number A in binary notation = " << getBin(a) << endl;
    cout << "Number B in binary notation = " << getBin(b) << endl;
    
    cout << "Enter number of position, p = ";
    cin >> p;
    cout << "Enter number bits for invert, n = ";
    cin >> n;
    int mask = (1u << n) - 1;
    mask <<= p;
    cout << "mask = " << getBin(mask) << endl;
    a ^= mask;
//    _itoa_s(a, tmp, 2);
    cout << "Invert n bits number A with position p = " << getBin(a) << endl;
    cout << endl;
    cout << "Enter start position q in B = ";
    cin >> q;
//    _itoa_s((a & mask) >> 1, tmp, 2);
    cout << "Searching bits А: " << getBin((a & mask) >> 1) << endl;
    
    int newMask = ~mask >> q;
//    _itoa_s(newMask, tmp, 2);
    cout << "Mask for B: " << getBin(newMask) << endl;
    
//    _itoa_s(b & newMask, tmp, 2);
    cout << "Clean bits in B: " << getBin(b & newMask) << endl;
    
//    _itoa_s(((b & newMask) | ((a & mask) >> 1)), tmp, 2);
    cout << "Result B = " << getBin(((b & newMask) | ((a & mask) >> 1))) << endl;


    cout << endl;
    return 0;
}
