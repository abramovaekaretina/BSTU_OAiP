//
//  main.cpp
//  5add2
//
//  Created by Ekaterina Abramova on 06.10.2020.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int countOfYears;
    double percentDiscount, finalCost = 0;
    cout << "Enter count of years : ";
    cin >> countOfYears;
    cout << "Enter percent : ";
    cin >> percentDiscount;
    cout << endl;
    
    int arrayOfCosts[countOfYears];
    for (int i = 0; i < countOfYears; i++) {
        cout << "Enter cost in " << i + 1 << " year : ";
        cin >> arrayOfCosts[i];
    }
    
    while (countOfYears) {
        for (int i = 0; i < countOfYears; i++) {
            finalCost += arrayOfCosts[i] * (100 - percentDiscount) / 100;
        }
        countOfYears--;
    }
    
    cout << "\nFinal cost is " << finalCost << endl << endl;
    
    return 0;
}
