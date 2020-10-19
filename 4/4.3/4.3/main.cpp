//
//  main.cpp
//  4.3
//
//  Created by Ekaterina Abramova on 13.05.2020.
//  Copyright © 2020 Ekaterina Abramova. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int choice;
    puts("Are you hungry? (1 - yes, 2 - no)");
    cin >> choice;
    switch (choice) {
        case 1: {
            puts("\nWhere do we go to eat? \n   (1 - We cook home-cooked food, 2 - We order at home, 3 - We go to the cafe)");
            cin >> choice;
            switch (choice) {
                case 1: puts("Awesome!"); break;
                case 2: puts("Good"); break;
                case 3: puts("Or maybe all the same at home?\n"); break;
            }
            break;
        case 2: puts("Then we will not eat"); break;
        }
        default: puts("Enter uncorrect option"); break;
    }

    return 0;
}
