//
//  main.cpp
//  3
//
//  Created by Ekaterina Abramova on 30.09.2020.
//

#include <iostream>

using namespace std;

int main() {
    int a, b, c, r, s, t;
    cout << "Enter size of first box : \n";
    cin >> a >> b >> c;
    cout << "Enter size of second box : \n";
    cin >> r >> s >> t;
    if (((a > r) && (b > s) && (c > t)) || ((a > s) && (b > t) && (c > r)) || ((a > t) && (b > r) && (c > s))) {
        cout << "\nSecond box will fit into first box\n\n";
    } else {
        cout << "\nSecond box will not fit into first box\n\n";
    }
    
    return 0;
}
