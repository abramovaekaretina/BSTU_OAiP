//
//  main.cpp
//  9add3
//
//  Created by Ekaterina Abramova on 02.11.2020.
//

//  Разделить массив на две  части,  поместив в первую элементы, большие среднего  арифметического  их  суммы, а во вторую - меньшие (части не сортировать)

#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, const char * argv[]) {
    
    setlocale(LC_CTYPE, "Russian");
    const int N = 100;
    int array[N];
    int sizeArray, s = 0;
    cout << "Enter size array : ";
    cin >> sizeArray;
    srand(time(NULL));
    
    cout << "\nArray : ";
    for (int i = 0; i < sizeArray; i++) {
        array[i] = rand() % 100 + 1;
        cout << array[i] << ' ';
        s += array[i];
    }
    
    double average = s / sizeArray;
    cout << "\n\nAverage - " << average;
    
    int arrayMoreAverage[sizeArray], arrayLessAverage[sizeArray], m = 0, n = 0;
    for (int i = 0; i < sizeArray; i++) {
        if (array[i] < average) {
            arrayLessAverage[m] = array[i];
            m++;
        } else if (array[i] > average) {
            arrayMoreAverage[n] = array[i];
            n++;
        }
    }
    
    cout << "\n\nArray with elements less than average : ";
    for (int i = 0; i < m; i++) {
        cout << arrayLessAverage[i] << "  ";
    }
    
    cout << "\n\nArray with elements more than average : ";
    for (int i = 0; i < n; i++) {
        cout << arrayMoreAverage[i] << "  ";
    }
    cout << endl;
    
    return 0;
}

