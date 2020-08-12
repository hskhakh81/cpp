#include <iostream>

using namespace std;

int main() {
    int a,b,c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    cout << "Smallest number is ";

    if (a < b ) {
        //a is less than b
        if (a < c) {
            //a  is less than both b and c
            cout << a << endl;
        } else {
            cout << c << endl;
        }

    } else if (b < c) {
        cout << b << endl;
    } else {
        cout << c << endl;
    }

    getchar();
    return 0;

}
