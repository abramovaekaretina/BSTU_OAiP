//
//  main.cpp
//  12
//
//  Created by Ekaterina Abramova on 23.11.2020.
//

//Написать программу, реализующую вставку в строку n символов, начиная с позиции k. 

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    char firstString[77], secondString[77];
    char c;
    int n1 = 0, n2 = 0, k, i, n;
    cout << "Enter string : ";
    cin >> firstString;
    n1 = strlen(firstString);
    cout << "String length: " << n1;
    cout << "\nEnter symbol: ";
    cin >> c;
//    gets_s(c);
    cout << "Enter number entering symbols: ";
    cin >> n;
    n2 = n1 + n;
    cout << "Enter position's number: ";
    cin >> k;
    if (k < n1) {
        for (i = 0; i < n2; i++) {
            if (i < k) {
                secondString[i] = firstString[i];
            } else if (i < (k + n)) {
                    secondString[i] = c;
                } else {
                    secondString[i] = firstString[i - n];
                }
        }
        secondString[n2] = 0;
        cout << "\nAnswer: " << secondString << endl << endl;
    }
    else {
        cout << "This number more than string length\n";
    }

    return 0;
}

//              WITH POINTERS

//    if (k < n1) {
//        for (i = 0; i < n2; i++) {
//            if (i < k) {
//                *(secondString + i) = *(firstString + i);
//            } else if (i < (k + n)) {
//                *(secondString + i) = c;
//                } else {
//                    *(secondString + i) = *(firstString + i - n);
//                }
//        }
//        *(secondString + n2) = 0;
//        cout << "\nAnswer: " << secondString << endl << endl;
//    }
//    else {
//        cout << "This number more than string length\n";
//    }
