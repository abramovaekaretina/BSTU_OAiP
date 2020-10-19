//
//  main.cpp
//  6add3
//
//  Created by Ekaterina Abramova on 09.10.2020.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    for (int i = 1000; i < 9999; i++) {
        int firstNumber = i % 10;
        int secondNumber = (i / 10) % 10;
        int thirdNumber = (i / 100) % 10;
        int fourthNumber = i / 1000;
        
        if ((i % 2 == 0) && (i % 7 == 0) && (i % 11 == 0) &&
            firstNumber + secondNumber + thirdNumber + fourthNumber == 30) {
            if (((firstNumber + secondNumber == 15) && (thirdNumber + fourthNumber == 15)) ||
                ((firstNumber + thirdNumber == 15) && (secondNumber + fourthNumber == 15))) {
                cout << "Derised number is " << i << endl << endl;
            }
        }
    }
    return 0;
}
