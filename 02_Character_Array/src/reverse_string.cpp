#include <iostream>
#include "length_of_string.h"

int main() {
    char a[100];
    std::cin.getline(a, 100);

    int start = 0;
    int end = day_02::wordLength(a) - 1;
    
    while (start < end) {
        std::swap(a[start], a[end]);
        ++start;
        --end;
    }

    std::cout << a << std::endl;

    return 0;
}