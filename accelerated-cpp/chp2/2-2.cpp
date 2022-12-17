//
// Created by emil on 12/16/22.
//

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    cout << "Please enter your first name ";

    string name;
    cin >> name;

    const string greeting = "Hello, " + name + "!";
    cout << endl;

    const int pad_tb = 5;
    const int pad_sides = 1;
    const int rows = pad_tb * 2 + 3;
    const string::size_type cols = greeting.size() + pad_sides * 2 + 2;

    for (int r = 0; r != rows; r++) {
        string::size_type c = 0;

        while (c != cols) {
            if (r == pad_tb + 1 && c == pad_sides + 1) {
                cout << greeting;
                c += greeting.size();
            } else {
                if (r == 0 | r == rows - 1 | c == 0 | c == cols - 1) {
                    cout << "*";
                }  else {
                    cout << " ";
                }
                ++c;
            }
        }

        cout << endl;
    }


    return 0;
}

