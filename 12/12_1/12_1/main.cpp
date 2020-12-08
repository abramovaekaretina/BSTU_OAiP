//
//  main.cpp
//  12_1
//
//  Created by Ekaterina Abramova on 23.11.2020.
//

//Написать программу, реализующую выделение подстроки S1 длиной k с позиции номер m из строки

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    const int N = 10;
    int k, m;
    char string[N], s1[N];
    cout << "Enter string: ";
    scanf("%s", string);
    cout << "Position: ";
    cin >> m;
    cout << "Number character: ";
    cin >> k;
    for (int i = 0; i < N; i++) {
        if (i == m) {
            for (int j = 0; j < k; j++) {
                s1[j] = string[i + j];
            }
        }
    }
    cout << "\nAnswer: ";
    for (int i = 0; i < k; i++) {
        cout << s1[i];
    }
    cout << "\n\n";

    return 0;
}

//              WITH POINTERS

//    for (int i = 0; i < N; i++) {
//        if (i == m) {
//            for (int j = 0; j < k; j++) {
//                *(s1 + j) = *(string + i + j);
//            }
//        }
//    }
//    for (int i = 0; i < k; i++) {
//        cout << "\nAnswer: " << *(s1 + i);
//    }
