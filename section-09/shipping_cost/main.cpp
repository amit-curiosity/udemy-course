#include <bits/stdc++.h>

int32_t main(int32_t argc, char *argv[]) {
    std::cout << "Welcome to Shipping Cost Calculator\n";
    std::cout << "\nEnter Package Dimension(inch):\n";

    std::cout << "Length (inches): ";
    int32_t package_length{0};
    std::cin >> package_length;

    std::cout << "Width (inches): ";
    int32_t package_width{0};
    std::cin >> package_width;

    std::cout << "Height (inches): ";
    int32_t package_height{0};
    std::cin >> package_height;

    const double_t base_cost{2.50};
    const int32_t minimum_dimension_length{0};
    const int32_t maximum_dimension_length{10};
    const int32_t tier1_threshold{100};
    const int32_t tier2_threshold{500};
    const double_t tier1_surcharge{0.10};
    const double_t tier2_surcharge{0.25};

    bool valid_length{package_length >= minimum_dimension_length && package_length <= maximum_dimension_length};
    bool valid_width{package_width >= minimum_dimension_length && package_width <= maximum_dimension_length};
    bool valid_height{package_height >= minimum_dimension_length && package_height <= maximum_dimension_length};
    if (valid_length && valid_width && valid_height) {
        int32_t volume_of_package{package_length * package_width * package_height};
        std::cout << "Package Volume: " << volume_of_package << "\n";

        double_t total_shipping_cost{base_cost};
        if (volume_of_package > tier2_threshold) {
            total_shipping_cost += base_cost * tier2_surcharge;
        } else if (volume_of_package > tier1_threshold) {
            total_shipping_cost += base_cost * tier1_surcharge;
        }

        /* print shipping cost */
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Your shipping cost: $" << total_shipping_cost << "\n";
    } else {
        std::cout << "Your package can't be delivered!\n";
    }
    return 0;
}
