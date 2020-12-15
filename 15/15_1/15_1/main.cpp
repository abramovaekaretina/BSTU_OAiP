//
//  main.cpp
//  15_1
//
//  Created by Ekaterina Abramova on 13.12.2020.
//

#include <iostream>

using namespace std;

void getWordFromString(char *string, int position, int number);

int main(int argc, const char * argv[]) {
    const int num = 15;
    int number, position;
    char str[] = "automatisation";
    cout << "String - ";
    for (int i = 0; i < num; i++) {
        cout << str[i];
    }
    cout << "\n\nEnter position = ";
    cin >> position;
    cout << "Enter number = ";
    cin >> number;
    getWordFromString(str, position, number);
    
    return 0;
}

void getWordFromString(char *string, int position, int number) {
    int length = strlen(string);
    char s1[length];
    for (int i = 0; i < length; i++) {
        if (i == position) {
            for (int j = 0; j < number; j++) {
                s1[j] = string[i + j];
            }
        }
    }
    cout << "\nResult - ";
    for (int i = 0; i < number; i++) {
        cout << s1[i];
    }
    cout << endl;
}
