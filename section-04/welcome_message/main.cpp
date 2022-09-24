#include <bits/stdc++.h>

int32_t main(int32_t argc, char *argv[]) {
    /* get first_name */
    std::cout << "Enter first name: ";
    std::string first_name{};
    std::cin >> first_name;

    /* get second_name */
    std::cout << "Enter last name: ";
    std::string second_name{};
    std::cin >> second_name;

    /* print message */
    std::cout << "Welcome " << first_name << " " << second_name << "!";

    return 0;
}
