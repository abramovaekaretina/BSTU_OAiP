//
//  main.cpp
//  16add1
//
//  Created by Ekaterina Abramova on 19.12.2020.
//

#include <iostream>
#include <locale>

using namespace std;

void firstTask();
int &minimum(int *buffer);
int &maximum(int *buffer);

void secondTask();


int main() {
    int count = 0;
    do {
        cout << "1 - counting the sums of the smallest and largest elements in a matrix" << endl;
        cout << "2 - counting the longest word" << endl;
        cin >> count;
        switch (count) {
            case 1:
                cout << "FIRST TASK : \n";
                firstTask();
                break;
            case 2:
                cout << "SECOND TASK : \n";
                secondTask();
                break;
            case 3: break;
        }
    } while (count != 3);
    return 0;
}

void firstTask() {
    int* array = new int[16];
    int rows = 4, columns = 4;
    srand((unsigned)time(NULL));
    cout << "Matrix :" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            *(array + i * columns + j) = rand() % 10;
            cout << *(array + i * columns + j) << " ";
        }
        cout << endl;
    }

    int sumOfMinimum = 0, sumOfMaximum = 0;
    for (int i = 0; i < rows; i++) {
        if ((i + 1) % 2 != 0) {
            int* buffer = new int[4];
            for(int j = 0; j < 4; j++) {
                *(buffer + j) = *(array + i * columns + j);
            }
            sumOfMinimum += minimum(&buffer[0]);
            delete[] buffer;
        } else {
            int* buffer = new int[4];
            for (int j = 0; j < 4; j++) {
                *(buffer + j) = *(array + i * columns + j);
            }
            sumOfMaximum += maximum(&buffer[0]);
            delete[] buffer;
        }
    }
    cout << "Sum of min - " << sumOfMinimum << endl;
    cout << "Sum of max - " << sumOfMaximum << endl << endl;
    delete[] array;
}

int &minimum(int* buffer) {
    int minimum = *buffer;
    for (int i = 1; i < 4; i++) {
        if (*(buffer + i) < minimum) {
            minimum = *(buffer + i);
        }
    }
    return minimum;
}

int &maximum(int* buffer) {
    int maximum = *buffer;
    for (int i = 1; i < 4; i++) {
        if (*(buffer + i) > maximum) {
            maximum = *(buffer + i);
        }
    }
    return maximum;
}

void secondTask() {
    char* string = new char[256];
    cout << "\nEnter a string (sentence ends with a dot):";
    cin.getline(string, 256, '.');
    int i = 0;
    int length = strlen(string);
    int maxLength = 0;
    int currentProbel = 0, lastProbel = 0;
    while (i != length) {
        if (*(string + i) == ' ') {
            currentProbel = i;
            int lengthOfWord = currentProbel - lastProbel - 1;
            if (lengthOfWord > maxLength) {
                maxLength = lengthOfWord;
            }
            lastProbel = currentProbel;
        }
        if ((i + 1) == length) {
            int lengthOfWord = length - lastProbel - 1;
            if (lengthOfWord > maxLength) {
                maxLength = lengthOfWord;
            }
        }
        i++;
    }
    cout << "Maximum number of letters in a word - " << maxLength << endl << endl;
}
