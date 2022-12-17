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

    cout << "Please enter padding: ";
    int pad = 0;
    cin >> pad;

    const string greeting = "Hello, " + name + "!";
    cout << endl;

    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;
    const string white_space(" ", cols - 2);

    for (int r = 0; r != rows; r++) {
        string::size_type c = 0;

        while (c != cols) {
            if (r == pad + 1 && c == pad + 1) {
                cout << greeting;
                c += greeting.size();
            } else {
                if (r == 0 | r == rows - 1 | c == 0 | c == cols - 1) {
                    cout << "*";
                    ++c;
                }  else {
                    cout <<  white_space;
                    c += white_space.size();
                }
            }
        }

        cout << endl;
    }


    return 0;
}

