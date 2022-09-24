#include <bits/stdc++.h>

int32_t main(int32_t argc, char *argv[]) {
    const double_t charge_per_small_room{25};
    const double_t charge_per_large_room{35};
    const double_t service_tax_rate{6};
    const int32_t estimates_validity_period{30};

    /* Welcome Message For Service */
    std::cout << "Amit's Carpet Cleaning Service\n";

    /* get number_of_small_rooms to be cleaned */
    std::cout << "\nEnter number of small rooms to be cleaned? ";
    int32_t number_of_small_rooms{0};
    std::cin >> number_of_small_rooms;

    /* get number_of_large_rooms to be cleaned */
    std::cout << "Enter number of large rooms to be cleaned? ";
    int32_t number_of_large_rooms{0};
    std::cin >> number_of_large_rooms;

    /* display appropriate message */
    std::cout << "\nEstimates for carpet cleaning service: \n";
    double_t cost_of_service{
            number_of_small_rooms * charge_per_small_room + number_of_large_rooms * charge_per_large_room};
    double_t service_tax{(cost_of_service * service_tax_rate) / 100.0};
    double_t total_service_charge{cost_of_service + service_tax};

    std::cout << "Number of small rooms: " << number_of_small_rooms << "\n";
    std::cout << "Number of large rooms: " << number_of_large_rooms << "\n";
    std::cout << "Price per small room: $" << charge_per_small_room << "\n";
    std::cout << "Price per large room: $" << charge_per_large_room << "\n";
    std::cout << "Cost: $" << cost_of_service << "\n";
    std::cout << "Tax: $" << service_tax << "\n";
    std::cout << "Total estimates: $" << total_service_charge << "\n";
    std::cout << "This estimate is valid for " << estimates_validity_period << " days.\n";
    return 0;
}