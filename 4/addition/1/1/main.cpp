//
//  main.cpp
//  addition 1
//
//  Created by Ekaterina Abramova on 13.05.2020.
//  Copyright © 2020 Ekaterina Abramova. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    double firstNumber, secondNumber, result = 0;
    char option;
    cout << "Enter first number : ";
    cin >> firstNumber;
    cout << "Enter second number : ";
    cin >> secondNumber;
    cout << "\nWhat do you want with this numbers?  ";
    cin >> option;
    switch (option) {
        case '+': result = firstNumber + secondNumber; break;
        case '-': result = firstNumber - secondNumber; break;
        case '*': result = firstNumber * secondNumber; break;
        case '/': result = firstNumber / secondNumber; break;
        case '%': result = (int)firstNumber % (int)secondNumber; break;
        default: puts("\nEnter uncorrect option"); break;
    }
    
    cout << "\nResult : " << result << "\n\n";
    
    return 0;
}
