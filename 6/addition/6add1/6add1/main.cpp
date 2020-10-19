//
//  main.cpp
//  6add1
//
//  Created by Ekaterina Abramova on 09.10.2020.
//

#include <iostream>

using namespace std;

//10-31

int main() {
    int result = 0;
    
    for (int i = 10; i <= 31; i++) {
        int firstNumber = pow(i, 2) / 100;
        int secondNumber = ((int)pow(i, 2) % 100) / 10;
        int thirdnumber = (int)pow(i, 2) % 10;
        
        bool isPrime = false;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
            }
        }
        isPrime = true;
        
        if ((firstNumber < secondNumber) && (secondNumber < thirdnumber) && isPrime) {
            result = pow(i, 2);
            break;
        } else {
            continue;
        }

    }
    
    cout << "Derised number : " << result << endl << endl;
    
    return 0;
}

