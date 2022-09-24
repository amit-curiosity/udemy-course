#include <bits/stdc++.h>

int32_t main(int32_t argc, char *argv[]) {
    /* get favorite_number */
    std::cout << "Enter favorite number(1-100): ";
    int32_t favorite_number;
    std::cin >> favorite_number;

    if (favorite_number >= 1 && favorite_number <= 100) {
        std::cout << favorite_number << " is my favorite number too!";
    } else {
        std::cout << "Please enter the number specified in the range!";
    }
    return 0;
}
