#include <iostream>
using namespace std;

void test() {
    static int y = 0;  // static variable
    y++;
    cout << "y = " << y << endl;
}

int main() {
    test();         // prints 1
    test();         // prints 2
    test();         // prints 3
    return 0;
}
