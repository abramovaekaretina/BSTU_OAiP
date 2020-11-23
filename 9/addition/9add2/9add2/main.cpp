//
//  main.cpp
//  9add2
//
//  Created by Ekaterina Abramova on 02.11.2020.
//

//  Определить, содержится ли в заданном массиве хотя бы одно число Фибоначчи

#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, const char * argv[]) {
    
    setlocale(LC_CTYPE, "Russian");
    const int n = 100;
    int array[n], arrayFib[12];
    int sizeArray, count = 0;
    cout << "Enter size array : ";
    cin >> sizeArray;
    srand(time(NULL));

    arrayFib[0] = 0;
    arrayFib[1] = 1;

    cout << "\nArray : ";
    for (int i = 0; i < sizeArray; i++) {
        array[i] = rand() % 100 + 1;
        cout << array[i] << ' ';
    }

    cout << "\nFibonacci number : ";
    for (int i = 2; i < 12; i++) {
        arrayFib[i] = arrayFib[i - 1] + arrayFib[i - 2];
    }
    for (int i = 0; i < 12; i++) {
        cout << arrayFib[i] << ' ';
    }
    for (int i = 0; i < sizeArray; i++) {
        for (int j = 0; j < 12; j++) {
            if (array[i] == arrayFib[j]) {
                count++;
            }
        }
    }

    if (count) {
        cout << "\nThe Fibonacci number is in the array";
    } else {
        cout << "\nThe Fibonacci number isn't in the array";
    }
    cout << endl;
    
    return 0;
}
