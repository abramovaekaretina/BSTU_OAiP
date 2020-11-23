//
//  main.cpp
//  11
//
//  Created by Ekaterina Abramova on 12.11.2020.
//


//Ввести целое число N. Выделить из этого числа цифры, кратные m, и записать их в одномерный массив

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int str[50];
    int i, a, x, m;
    cout << "Enter number A : ";
    cin >> a;
    cout << "Enter the number by which m should be divisible : ";
    cin >> m;
    i = 0;
    while (a > 0) {
        x = a % 10;
        a /= 10;
        if (x % m == 0) {
            *(str + i) = x;
            i++;
        }
    }
    cout << "\nAn array containing multiples of m : ";
    for (int j = 0; j < i; j++) {
        cout << str[j] << " ";
    }
    cout << endl;

    return 0;
}
