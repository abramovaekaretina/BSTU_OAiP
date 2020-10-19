//
//  main.cpp
//  6add2
//
//  Created by Ekaterina Abramova on 09.10.2020.
//

#include <iostream>

using namespace std;

//Имеются два  сосуда. В первом сосуде находится C1 литров воды, во втором – C2 литров воды. Из первого сосуда переливают половину воды во второй сосуд, затем из второго переливают половину в первый сосуд, и так далее. Сколько воды окажется в обоих сосудах после 12 переливаний

int main(int argc, const char * argv[]) {
    int n = 0;
    double firstVessel, secondVessel;
    cout << "Enter volume of the first vessel : ";
    cin >> firstVessel;
    cout << "Enter volume of the second vessel : ";
    cin >> secondVessel;
    
    while (n < 12) {
        secondVessel += firstVessel / 2;
        firstVessel /= 2;
        n++;
        firstVessel += secondVessel / 2;
        secondVessel /= 2;
        n++;
    }
    
    cout << "\n\n\nIn first vessel - " << firstVessel << ", in second vessel - " << secondVessel << endl << endl;
    
    return 0;
}
