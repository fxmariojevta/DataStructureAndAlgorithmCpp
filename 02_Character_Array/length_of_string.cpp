#include<iostream>
using namespace std;

int wordLength(char a[]) {
    int count {0};
    for (int i = 0; a[i] != '\0'; ++i) {
        ++count;
    }

    return count;
}

int main() {
    char a[100];
    cout << "Enter word: ";
    cin >> a;

    cout << endl << "Word length: " << wordLength(a) << endl;

    return 0;
}