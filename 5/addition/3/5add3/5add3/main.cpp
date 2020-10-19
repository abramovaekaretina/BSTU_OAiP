//
//  main.cpp
//  5add3
//
//  Created by Ekaterina Abramova on 06.10.2020.
//

#include <iostream>

using namespace std;

int main() {
    
    int numberOfPosition;
    cout << "Enter number of position in sequence : ";
    cin >> numberOfPosition;
    int result = 1;
    int n = 0;
    while (n < numberOfPosition - 1) {
        result *= 2;
        int t = result;
        do {
            n++;
        } while(t /= 10);
    }
    
    for (int i = n - numberOfPosition; i > 0; i--) {
        result /= 10;
    }
    cout << "\nResult - " << result % 10 << "\n\n";
    
    return 0;
}
