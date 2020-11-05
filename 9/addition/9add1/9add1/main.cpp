//
//  main.cpp
//  9add1
//
//  Created by Ekaterina Abramova on 02.11.2020.
//

#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, const char * argv[]) {
    
    setlocale(LC_CTYPE, "Russian");
    const int n = 100;
    int array[n];
    int sizeArray, sizeNewArray = 1, r;
    cout << "Enter size array : ";
    cin >> sizeArray;
    srand(time(NULL));
    
    cout << "\nArray : ";
    for (int i = 0; i < sizeArray; i++) {
        array[i] = rand() % 100 + 1;
        cout << array[i] << ' ';
    }
    
    for (int i = 1, j = 1; i < sizeArray; i++) {
        if (i % 7 != 0) {
            array[j++] = array[i];
            sizeNewArray++;
        }
    }
    cout << "\n\nArray after deleting : ";
    for (int i = 0; i < sizeNewArray; i++) {
        cout << array[i] << ' ';
    }
    
    for (int i = 0; i < sizeNewArray; i++) {
        if (array[i] % 2 != 0) {
            sizeNewArray++;
            for (r = sizeNewArray; r > i/*- 1*/; r--) {
                array[r] = array[r - 1];
            }
            array[i] = 4;
            i++;
        }
    }
    
    cout << "\n\nArray with number 4 before even numbers : ";
    for (int i = 0; i < sizeNewArray; i++) {
        cout << array[i] << "  ";
    }
    cout << endl;
    
    return 0;
}

