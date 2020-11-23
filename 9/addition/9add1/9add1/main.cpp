//
//  main.cpp
//  9add1
//
//  Created by Ekaterina Abramova on 02.11.2020.
//

//    Переставить в обратном порядке элементы массива, расположенные между его минимальным и максимальным элементами

#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, const char * argv[]) {
    
    setlocale(LC_CTYPE, "Russian");
    const int n = 100;
    int array[n];
    int sizeArray;
    cout << "Enter size array : ";
    cin >> sizeArray;
    srand(time(NULL));
    
    cout << "\nArray : ";
    for (int i = 0; i < sizeArray; i++) {
        array[i] = rand() % 100 + 1;
        cout << array[i] << ' ';
    }
    
    int minValue = array[0];
    int indexMinValue = 0;
    for (int i = 0; i < sizeArray; i++) {
        if (array[i] < minValue) {
            minValue = array[i];
            indexMinValue = i;
        }
    }
    
    int maxValue = array[0];
    int indexMaxValue = 0;
    for (int i = 0; i < sizeArray; i++) {
        if (array[i] > maxValue) {
            maxValue = array[i];
            indexMaxValue = i;
        }
    }
    
    cout << "\nMinimum value - " << minValue << " (index - " << indexMinValue << "), \nMaximum value - " << maxValue << " (index - " << indexMaxValue << ")";
    
    cout << "\n\nNew array : ";
    
    if (indexMinValue < indexMaxValue) {
        for (int i = indexMaxValue - 1; i > indexMinValue; i--) {
            cout << array[i] << ' ';
        }
    } else if (indexMinValue > indexMaxValue) {
        for (int i = indexMinValue + 1; i > indexMaxValue; i--) {
            cout << array[i] << ' ';
        }
    }
    
    return 0;
}

