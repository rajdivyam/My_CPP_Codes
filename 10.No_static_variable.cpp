#include <iostream>
using namespace std;

void test() {
    int x = 0;  // normal variable
    x++;
    cout << "x = " << x << endl;
}

int main() {
    test();    // prints 1
    test();     // prints 1
    test();      // prints 1
    return 0;
}
