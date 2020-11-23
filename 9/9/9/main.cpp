//
//  main.cpp
//  9
//
//  Created by Ekaterina Abramova on 02.11.2020.
//

//Удалить элемент с номером k. Добавить после каждого четного элемента массива элемент со значением 0

#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, const char * argv[]) {
    
    setlocale(LC_CTYPE, "Russian");
    const int n = 100;
    int array[n];
    int sizeFirstArray, index, i = 0, j, k, r;
    bool flag = false;
    cout << "Enter size array : ";
    cin >> sizeFirstArray;
    srand(time(NULL));
    
    cout << "Array : ";
    for (int i = 0; i < sizeFirstArray; ++i) {
        array[i] = rand() % 100 + 1;
        cout << array[i] << ' ';
    }
    
    cout << endl << "\nDerised number's index for deleting : ";
    cin >> index;
    while (!flag && i < n) {
        if (i == index) {
            flag = true;
        } else {
            i++;
        }
    }
    if (!flag) {
        cout << "This found not found";
    } else {
        cout << "Number " << array[i - 1] << " exits and number's index - " << i << endl;
    }
    cout << endl;
    
    k = 0;
    for (i = j = 0; i < sizeFirstArray; i++) {
        if (i != index - 1) {
            array[j++] = array[i];
            k++;
        }
    }
    sizeFirstArray--;
    cout << "Array after deleting : ";
    for (j = 0; j < k; ++j) {
        cout << array[j] << ' ';
    }
    cout << endl;
    
    for (i = 0; i < sizeFirstArray; i++) {
        if (array[i] % 2 == 0) {
            sizeFirstArray++;
            for (r = sizeFirstArray; r > i; r--) {
                array[r] = array[r - 1];
            }
            array[i] = 0;
            i++;
        }
    }
    
    cout << "Array with number 1 before even numbers : ";
    for (i = 0; i < sizeFirstArray; i++) {
        cout << array[i] << "  ";
    }
    cout << endl;
    
    return 0;
}
