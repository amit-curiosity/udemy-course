#include <bits/stdc++.h>

int32_t main(int32_t argc, char *argv[]) {
    /* get length of room */
    std::cout << "Enter room length (square-feet): ";
    double_t room_length{0};
    std::cin >> room_length;

    /* get breadth of room */
    std::cout << "Enter room breadth (square-feet): ";
    double_t room_breadth{0};
    std::cin >> room_breadth;

    double_t area_of_room{room_length * room_breadth};

    /* print room_area */
    std::cout << "Area of room: " << area_of_room << " square-feet\n";
    return 0;
}