//
//  main.cpp
//  11add2
//
//  Created by Ekaterina Abramova on 12.11.2020.
//

//Задан одномерный числовой массив A из n элементов и число k. Найти номера всех элементов массива, которые равны, больше и меньше k

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    const int n = 14;
    int k;
    cout << "Enter K : ";
    cin >> k;
    int *array = new int[n],
        *equalArray = new int[n],
        *moreArray = new int[n],
        *lessArray = new int[n];
    int sizeEqualArray = 0, sizeMoreArray = 0, sizeLessArray = 0;
    cout << "Array : ";
    for (int i = 0; i < n; i++) {
        array[i] = rand() % 100 + 1;
        cout << *(array + i) << ' ';
        if (*(array + i) == k) {
            *(equalArray + (sizeEqualArray++)) = i + 1;
//            *(equalArray + (sizeEqualArray++)) = *(array + i);
        } else if (*(array + i) > k) {
            *(moreArray + (sizeMoreArray++)) = i + 1;
//            *(moreArray + (sizeMoreArray++)) = *(array + i);
        } else if (*(array + i) < k) {
            *(lessArray + (sizeLessArray++)) = i + 1;
//            *(lessArray + (sizeLessArray++)) = *(array + i);
        }
    }
    
    cout << "\nEqual "<< k << " (indexes) : ";
    for (int i = 0; i < sizeEqualArray; i++) {
        cout << *(equalArray + i) << ' ';
    }
    cout << "\nMore " << k << " (indexes) : ";
    for (int i = 0; i < sizeMoreArray; i++) {
        cout << *(moreArray + i) << ' ';
    }
    cout << "\nLess " << k << " (indexes) : ";
    for (int i = 0; i < sizeLessArray; i++) {
        cout << *(lessArray + i) << ' ';
    }
    cout << endl;

    return 0;
}
