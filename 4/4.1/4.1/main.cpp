//
//  main.cpp
//  4.1
//
//  Created by Ekaterina Abramova on 13.05.2020.
//  Copyright © 2020 Ekaterina Abramova. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    float firstNumber, secondNumber, thirdNumber, temporary;
    cout << "Enter 3 numbers : \n";
    cin >> firstNumber >> secondNumber >> thirdNumber;
    if (firstNumber < secondNumber) {
        temporary = firstNumber;
        firstNumber = secondNumber;
        secondNumber = temporary;
    }
    if (secondNumber < thirdNumber) {
        temporary = secondNumber;
        secondNumber = thirdNumber;
        thirdNumber = temporary;
    }
    if (firstNumber < secondNumber) {
        temporary = firstNumber;
        firstNumber = secondNumber;
        secondNumber = temporary;
    }
    cout << "\nNumbers in descending order : " << firstNumber << " " << secondNumber << " " << thirdNumber << "\n\n";
    return 0;
}

