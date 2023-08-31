#include <iostream>

using namespace std;

int main() {
    int a {0};
    int b {0};

    cin >> a >> b;
    cout << "Value before swap:" << endl;
    cout << "Value a :" << a << endl;
    cout << "Value b :" << b << endl;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    // swap(a, b)

    cout << "Value after swap:" << endl;
    cout << "Value a :" << a << endl;
    cout << "Value b :" << b << endl;

    return 0;
}