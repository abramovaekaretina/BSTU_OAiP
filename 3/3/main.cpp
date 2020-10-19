//
//  main.cpp
//  3
//
//  Created by Ekaterina Abramova on 13.05.2020.
//  Copyright © 2020 Ekaterina Abramova. All rights reserved.
//

#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char placeholder, probel;
    probel = ' ';
    cout << "Enter a plaplaceholdereholder : ";
    cin >> placeholder;
    cout << setw(36) << setfill(probel) << probel;
    cout << setw(8) << setfill(placeholder) << placeholder << endl;
    cout << setw(34) << setfill(probel) << probel;
    cout << setw(12) << setfill(placeholder) << placeholder << endl;
    cout << setw(32) << setfill(probel) << probel;
    cout << setw(16) << setfill(placeholder) << placeholder << endl;
    cout << setw(31) << setfill(probel) << probel;
    cout << setw(18) << setfill(placeholder) << placeholder << endl;
    cout << setw(30) << setfill(probel) << probel;
    cout << setw(20) << setfill(placeholder) << placeholder << endl;
    
    cout << "\n\n    –second task a) –\n\n";
    
    int firstNumber, secondNumber;
    cout << "Enter first number to swap : ";
    cin >> firstNumber;
    cout << "Enter second number to swap : ";
    cin >> secondNumber;
    
    // Первый способ с изпользованием допольнительной переменной
    int temporary;
    temporary = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temporary;
    
    cout << "\nNew first number : " << firstNumber << endl << "New second number : " << secondNumber << endl;

    
    // Второй способ без использования дополнительной переменной
    cout << "\n\n    –second task b) –\n\n";

    firstNumber = secondNumber + firstNumber;
    secondNumber = firstNumber - secondNumber;
    firstNumber = firstNumber - secondNumber;
    
    cout << "\nNew first number : " << firstNumber << endl << "New second number : " << secondNumber << endl;
    
    return 0;
}
