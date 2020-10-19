//
//  main.cpp
//  5add1
//
//  Created by Ekaterina Abramova on 06.10.2020.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double firstDay, increasePercent = 0.03, finalEarnings, currentEarning;
    int countOfDays = 0;
    cout << "Enter earning in first day : ";
    cin >> firstDay;
    cout << "Enter final earning : ";
    cin >> finalEarnings;
    currentEarning = firstDay;
    
    while (currentEarning < finalEarnings) {
        currentEarning += currentEarning * increasePercent;
        countOfDays++;
    }
    cout << "\nEarning reached the derised value in " << countOfDays << " days.\n\n";
    return 0;
}
