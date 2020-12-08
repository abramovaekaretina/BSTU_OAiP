//
//  main.cpp
//  11add3
//
//  Created by Ekaterina Abramova on 12.11.2020.
//


//Вводится последовательность из n натуральных чисел. Необходимо определить наименьшее натуральное число, отсутствующее в последовательности.

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    const int n = 10;
    int array[n];
    int *p, *q;
    p = array; q = array + n;
    for (; p < q; ++p) {
        cin >> *p;
    }
    for (p = array; p < q; ++p){
        if (*p != p - array + 1) {
            cout << "\nSmallest natural number isnit sequence : " << p - array + 1;
            break;
        }
    }
    cout << endl;

    return 0;
}
