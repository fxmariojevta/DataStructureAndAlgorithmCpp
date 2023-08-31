#include <iostream>
#include "includes/length_of_string.h"

using namespace day_02;

int wordLength(char a[]) {
    int count {0};
    for (int i = 0; a[i] != '\0'; ++i) {
        ++count;
    }

    return count;
}

int main() {
    char a[100];
    std::cout << "Enter word: ";
    std::cin >> a;

    std::cout << std::endl << "Word length: " << day_02::wordLength(a) << std::endl;

    return 0;
}